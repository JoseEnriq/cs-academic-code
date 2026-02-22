#include "telaprojeto.h"
#include "ui_telaprojeto.h"

TelaProjeto::TelaProjeto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaProjeto)
{
    ui->setupUi(this);
}

TelaProjeto::~TelaProjeto()
{
    delete ui;
}
