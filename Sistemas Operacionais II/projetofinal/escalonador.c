#include <stdio.h>
#include <stdlib.h>
#include <ucontext.h>

#define NUM_TASKS 3
#define STACK_SIZE 8192

typedef struct tarefa 
{
    ucontext_t contexto;
    struct tarefa *proxima;
} tarefa_t;

tarefa_t *tarefa_atual = NULL;
tarefa_t *lista_de_tarefas = NULL;

void escalonar() 
{
    if (tarefa_atual) {
        tarefa_t *tarefa_anterior = tarefa_atual;
        tarefa_atual = tarefa_atual->proxima ? tarefa_atual->proxima : lista_de_tarefas;
        swapcontext(&tarefa_anterior->contexto, &tarefa_atual->contexto);
    }
}

void tarefa1() 
{
    while (1) {
        printf("Tarefa 1\n");
        escalonar();
    }
}

void tarefa2() 
{
    while (1) {
        printf("Tarefa 2\n");
        escalonar();
    }
}

void tarefa3() 
{
    while (1) {
        printf("Tarefa 3\n");
        escalonar();
    }
}

void criar_tarefa(void (*func_tarefa)()) 
{
    tarefa_t *nova_tarefa = (tarefa_t *)malloc(sizeof(tarefa_t));
    getcontext(&nova_tarefa->contexto);
    nova_tarefa->contexto.uc_stack.ss_sp = malloc(STACK_SIZE);
    nova_tarefa->contexto.uc_stack.ss_size = STACK_SIZE;
    nova_tarefa->contexto.uc_link = NULL;
    makecontext(&nova_tarefa->contexto, func_tarefa, 0);

    if (lista_de_tarefas == NULL) {
        lista_de_tarefas = nova_tarefa;
        tarefa_atual = nova_tarefa;
    } else {
        tarefa_t *tmp = lista_de_tarefas;
        while (tmp->proxima) tmp = tmp->proxima;
        tmp->proxima = nova_tarefa;
    }
    nova_tarefa->proxima = lista_de_tarefas;  
}

int main() 
{
    criar_tarefa(tarefa1);
    criar_tarefa(tarefa2);
    criar_tarefa(tarefa3);

    escalonar();  // Iniciar o escalonamento
    return 0;
}
