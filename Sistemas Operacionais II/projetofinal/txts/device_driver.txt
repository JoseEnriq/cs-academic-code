#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h> // Para estruturas relacionadas a arquivos
#include <linux/uaccess.h> // Para copy_to_user e copy_from_user

#define DEVICE_NAME "meu_driver"
#define EXAMPLE_MSG "Olá! Este é um exemplo de mensagem do driver.\n"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Seu Nome");
MODULE_DESCRIPTION("Exemplo de Driver de Caractere");

static int major_number; // Número principal do dispositivo

// Funções de operação do driver
static int driver_open(struct inode *inode, struct file *file)
{
    pr_info("Driver: open()\n");
    return 0;
}

static int driver_release(struct inode *inode, struct file *file)
{
    pr_info("Driver: release()\n");
    return 0;
}

static ssize_t driver_read(struct file *file, char __user *user_buffer,
                           size_t count, loff_t *ppos)
{
    int len = strlen(EXAMPLE_MSG);
    if (count < len)
        return -EINVAL;

    if (*ppos != 0)
        return 0;

    if (copy_to_user(user_buffer, EXAMPLE_MSG, len))
        return -EFAULT;

    *ppos = len;
    return len;
}

// Estrutura de operações do driver
static struct file_operations fops = {
    .open = driver_open,
    .read = driver_read,
    .release = driver_release,
};

// Função de inicialização do módulo
static int __init driver_init(void)
{
    major_number = register_chrdev(0, DEVICE_NAME, &fops);
    if (major_number < 0) {
        pr_alert("Falha ao registrar o número principal\n");
        return major_number;
    }
    pr_info("Driver registrado com número principal %d\n", major_number);
    return 0;
}

// Função de descarregamento do módulo
static void __exit driver_exit(void)
{
    unregister_chrdev(major_number, DEVICE_NAME);
    pr_info("Driver descarregado\n");
}

module_init(driver_init);
module_exit(driver_exit);
