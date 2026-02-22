#include "telaprincipal.h"
#include "ui_telaprincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
    mostrarDadosDosConsultores();
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}
void TelaPrincipal::limparTela() const{
   /* ui->lineEditID->clear();
    ui->lineEditNome->clear();
    ui->lineEditEmail->clear();
    ui->lineEditDDI->clear();
    ui->lineEditDDD->clear();
    ui->lineEditNumero->clear();
    ui->lineEditLogradouro->clear();
    ui->lineEditNumeroEnd->clear();
    */
}

/*void TelaPrincipal::on_pushButtonTeste_clicked()
{
    try {
        QString saida;
        ejm::Telefone testeFone(55,61,12345);
        saida += "Telefone: " + testeFone.toString() + "\n";
        ejm::Endereco testeEndereco("Rua das Cove",123);
        saida += "Endereco: " + testeEndereco.toString() + "\n";
        ejm::Consultor consultorT1(100,"Carlos das Cove","cove@teste.com.br",
                                  testeFone,testeEndereco);
        ejm::Consultor consultorT2(200,"Jose do Pepino","pepino@teste.com.br",
                                  testeFone,testeEndereco);
        ejm::Consultor consultorT3(300,"Maria Silva","maria@teste.com.br",
                                  testeFone,testeEndereco);
        ejm::Consultor consultorT4(400,"Godofredo Silva","godo@teste.com.br",
                                  testeFone,testeEndereco);
        ejm::Consultor consultorT5(500,"Orozimbo Mabuto","mabuto@teste.com.br",
                                  testeFone,testeEndereco);
        //saida +="\n\nConsultor: " + consultorT1.toString() + "\n";
        //ui->textEditSaida->setText(saida);

        ejm::ConsultorDAO consultorDAOt;
        //saida = "\n Dados dos Consultores \n";
         //std::list<ejm::Consultor> *listaDeConsultores = 0;
        // listaDeConsultores = consultorDAOt.listagem();
         //std::list<ejm::Consultor>::iterator it;
        //for(it = listaDeConsultores->begin(); it != listaDeConsultores->end(); ++it){
            // saida += it->toString() + "\n";
        // }
        //ui->textEditSaida->setText(saida);
        //delete listaDeConsultores;
       // consultorDAOt.incluir(consultorT1);
       // consultorDAOt.incluir(consultorT2);
       // consultorDAOt.incluir(consultorT3);
       // consultorDAOt.incluir(consultorT4);
       // consultorDAOt.incluir(consultorT5);
        //ejm::IConsultorDAO &teste = consultorDAOt;
       // teste.incluir(consultorT);
        //ejm::Consultor obj = consultorDAOt.consultarPorID(600);
        consultorDAOt.excluir(500);
        //ui->textEditSaida->setText(obj.toString());
    }  catch (QString &erro) {
        //ui->textEditSaida->setText("\n\nERRO: " + erro +"\n\n");
    }
}
*/

void TelaPrincipal::on_pushButtonIncluir_clicked()
{
    try {

        //abrir nova tela

        form3 =new TelaInclusao(this);
        form3->show();
        mostrarDadosDosConsultores(); //**************NAO ATUALIZA

        /*
        ejm::ConsultorDAO aux;
        int id = ui->lineEditID->text().toInt();
        // ID == 0 || ID == JA EXISTE
        if (id == 0){
            limparTela();
            throw QString("ID TEM QUE SER DIFERENTE DE 0");
        }
        if (id == aux.consultarPorID(id).getID()){
            limparTela();
            throw QString("ID JÁ EXISTE");
        }
        QString nome = ui->lineEditNome->text();
        QString email = ui->lineEditEmail->text();
        int ddd = ui->lineEditDDD->text().toInt();
        int ddi = ui->lineEditDDI->text().toInt();
        int numero = ui->lineEditNumero->text().toLongLong();
        ejm::Telefone fone(ddi,ddd,numero);
        QString logradouro = ui->lineEditLogradouro->text();
        int numeroEd = ui->lineEditNumeroEnd->text().toInt();

        ejm::Endereco endereco(logradouro,numeroEd);
        ejm::Consultor pessoa(id,nome,email,fone,endereco);
        ejm::ConsultorDAO cadConsultores; 


        cadConsultores.incluir(pessoa);
        this->limparTela();
        mostrarDadosDosConsultores();*/
    }  catch (QString erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA - Inclusão",erro);
    }
}
void TelaPrincipal::mostrarDadosDosConsultores(){
    try {
        QString tipo = "";
        if (ui->comboBox->currentText() == "ID")
             tipo += "ID";
        else
             tipo +="Nome";
        ejm::ConsultorDAO cadConsultores;
        std::list<ejm::Consultor> *listaDeConsultores = 0;
        listaDeConsultores = cadConsultores.listagem(tipo);
        //Limpar a grid
        ui->tableWidgetContato->setRowCount(0);
        while(!listaDeConsultores->empty()){
            ejm::Consultor objConsultor = listaDeConsultores->front();
            listaDeConsultores->pop_front();
            //Ajustar a coluna da grid ao conteudo dela
           // ui->tableWidgetContato->resizeColumnsToContents();
            //Montado a grid
            QTableWidgetItem *itemId = new QTableWidgetItem(QString::number(objConsultor.getID()));
            QTableWidgetItem *itemNome = new QTableWidgetItem(objConsultor.getNomeCompleto());
            QTableWidgetItem *itemEmail = new QTableWidgetItem(objConsultor.getEmail());
            QString telefone = QString::number(objConsultor.getTelefone().getDDI());
            telefone += "("+ QString::number(objConsultor.getTelefone().getDDD()) + ")";
            telefone += QString::number(objConsultor.getTelefone().getNumero());
            QTableWidgetItem *itemTelefone = new QTableWidgetItem(telefone);
            QString endereco = objConsultor.getEndereco().getLogradouro() + " - ";
            endereco += "Numero:  "+ QString::number(objConsultor.getEndereco().getNumero());
            QTableWidgetItem *itemEndereco = new QTableWidgetItem(endereco);

            //Obtendo a quantidade de linhas tem na grid
            int linha = ui->tableWidgetContato->rowCount();
            //incluindo uma linha na grid
            ui->tableWidgetContato->insertRow(linha);
            ui->tableWidgetContato->setItem(linha,0,itemId);
            ui->tableWidgetContato->setItem(linha,1,itemNome);
            ui->tableWidgetContato->setItem(linha,2,itemEmail);
            ui->tableWidgetContato->setItem(linha,3,itemTelefone);
            ui->tableWidgetContato->setItem(linha,4,itemEndereco);

/*
        QPushButton* btn_edit = new QPushButton();  ----> criar um botao

        btn_edit = new QPushButton();  ----> dar new no botao

        btn_edit->setText("Excluir");  ----> nome dentro do botao

        ui->tableWidgetContato->setCellWidget(0,5,(QWidget*)btn_edit);----> lugar que vai ta

        */
}
        //AJUSTAR AO CONTEUDO
        ui->tableWidgetContato->resizeColumnsToContents();
        delete listaDeConsultores;
    }  catch (QString erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA - Inclusão",erro);
    } catch(...){
        QMessageBox::information(this,"ERRO","ERRO NA LISTAGEM");
    }
}

void TelaPrincipal::on_pushButtonExcluir_clicked() //BOTAO DE EXCLUIR
{
    try {    
        //**********************************ERRO AO EXCLUIR ----  QUANDO TA VAZIA
        if(!ui->tableWidgetContato->item(0,0)){
            throw QString("NÃO FOI POSSIVEL EXLUIR");
        }
        int linha = ui->tableWidgetContato->currentRow(); //PEGA O ID
        int id = ui->tableWidgetContato->item(linha,0)->text().toInt();

        if(id == 0 || linha == 0){
            throw QString("NÃO FOI SELECIONADO");
        }
        ejm::ConsultorDAO cadConsultores;
        cadConsultores.excluir(id); // CHAMA O METODO EXCLUIR E PASSA O ID
        this->limparTela();
        mostrarDadosDosConsultores();
    }  catch (QString erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA - Inclusão",erro);
    }
}


void TelaPrincipal::on_pushButtonOrdenar_clicked()
{
    mostrarDadosDosConsultores();
}

void TelaPrincipal::on_pushButtonAlterar_clicked()
{
    form2 =new telaDeAlteracoes(this);
    form2->show();
    mostrarDadosDosConsultores(); //**************NAO ATUALIZA
}

