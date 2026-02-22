#include "teladealteracoes.h"
#include "telaprincipal.h"
#include "consultor.h"
#include "consultordao.h"
#include "ui_teladealteracoes.h"
#include <QMessageBox>
telaDeAlteracoes::telaDeAlteracoes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaDeAlteracoes)
{
    ui->setupUi(this);
}

telaDeAlteracoes::~telaDeAlteracoes()
{
    delete ui;
}

void telaDeAlteracoes::on_pushButton_clicked()
{
    try {
        ejm::ConsultorDAO consult; // criei um objeto
        ejm::Consultor AUX;

        int id = ui->lineEditID->text().toInt(); // valor do id

        AUX = consult.consultarPorID(id);

        //mostrar consultor =

        ui->lineEditNome->setText(AUX.getNomeCompleto());
        ui->lineEditEmail->setText(AUX.getEmail());
        ui->lineEditDDI->setText(QString::number(AUX.getTelefone().getDDI()));
        ui->lineEditDDD->setText(QString::number(AUX.getTelefone().getDDD()));


        ui->lineEditNumero->setText(QString::number(AUX.getTelefone().getNumero()));


        ui->lineEditEndereco->setText(AUX.getEndereco().getLogradouro());
        ui->lineEditNumEnde->setText(QString::number(AUX.getEndereco().getNumero()));

        QString nome =  consult.consultarPorID(id).getNomeCompleto();
        QMessageBox::about(this,"Consultor",QString::number(id) + "-" + nome);
    } catch (...) {
        QMessageBox::about(this,"ERRO","O ID INFORMADO NÃO EXISTE");
    }

}


void telaDeAlteracoes::on_pushButtonSalvar_clicked()
{
    ejm::ConsultorDAO aux;
    int id = ui->lineEditID->text().toInt();
    if(aux.consultarPorID(id).getNomeCompleto() == ""){
        throw("ESSE ID NÃO ESTÁ REGISTRADO");
    }
    //verificar
    QString nome = ui->lineEditNome->text();
    QString email = ui->lineEditEmail->text();
    //-------------------------------------------------

    int ddi = ui->lineEditDDI->text().toInt();
    int ddd = ui->lineEditDDD->text().toInt();
    int numero = ui->lineEditNumero->text().toLongLong();

    ejm::Telefone fone(ddi,ddd,numero);

    //-------------------------------------------------

    QString logradouro = ui->lineEditEndereco->text();
    int numeroEd = ui->lineEditNumEnde->text().toInt();

    ejm::Endereco endereco(logradouro,numeroEd); 

    //-------------------------------------------------

    ejm::Consultor pessoa(id,nome,email,fone,endereco);
    ejm::ConsultorDAO consult;

    consult.excluir(ui->lineEditID->text().toInt()); // excluir
    consult.incluir(pessoa);//incluir

    TelaPrincipal teste;

    teste.mostrarDadosDosConsultores();//**************NAO ATUALIZA
    close();
    teste.mostrarDadosDosConsultores();//**************NAO ATUALIZA

}

