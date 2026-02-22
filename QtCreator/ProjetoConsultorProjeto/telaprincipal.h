#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H
#include "telainclusao.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <telefone.h>
#include <endereco.h>
#include <consultor.h>
#include <IConsultorCRUD.h>
#include <consultordao.h>
#include <list>
#include <teladealteracoes.h>
QT_BEGIN_NAMESPACE
namespace Ui { class TelaPrincipal; }
QT_END_NAMESPACE

class TelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();

    void mostrarDadosDosConsultores();
private:
    void limparTela() const;


private slots:
   // void on_pushButtonTeste_clicked();
    void on_pushButtonIncluir_clicked();

    void on_pushButtonExcluir_clicked();

    void on_pushButtonOrdenar_clicked();


    void on_pushButtonAlterar_clicked();

private:
    Ui::TelaPrincipal *ui;
    telaDeAlteracoes *form2;
    TelaInclusao *form3;
};
#endif // TELAPRINCIPAL_H
