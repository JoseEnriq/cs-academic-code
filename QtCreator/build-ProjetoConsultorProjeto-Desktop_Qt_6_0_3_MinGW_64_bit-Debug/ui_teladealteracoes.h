/********************************************************************************
** Form generated from reading UI file 'teladealteracoes.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADEALTERACOES_H
#define UI_TELADEALTERACOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaDeAlteracoes
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditDDD;
    QLineEdit *lineEditNumero;
    QLabel *labelDDI;
    QLabel *labelDDD;
    QLabel *labelNumero;
    QLineEdit *lineEditDDI;
    QLabel *labelTelefone_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QLabel *labelTELA;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonSalvar;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelID;
    QLineEdit *lineEditID;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelNumero_2;
    QLineEdit *lineEditNumEnde;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;

    void setupUi(QDialog *telaDeAlteracoes)
    {
        if (telaDeAlteracoes->objectName().isEmpty())
            telaDeAlteracoes->setObjectName(QString::fromUtf8("telaDeAlteracoes"));
        telaDeAlteracoes->resize(639, 466);
        gridLayoutWidget = new QWidget(telaDeAlteracoes);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 250, 521, 61));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        gridLayoutWidget->setFont(font);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditDDD = new QLineEdit(gridLayoutWidget);
        lineEditDDD->setObjectName(QString::fromUtf8("lineEditDDD"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditDDD->sizePolicy().hasHeightForWidth());
        lineEditDDD->setSizePolicy(sizePolicy1);
        lineEditDDD->setFont(font);

        gridLayout->addWidget(lineEditDDD, 2, 2, 1, 1);

        lineEditNumero = new QLineEdit(gridLayoutWidget);
        lineEditNumero->setObjectName(QString::fromUtf8("lineEditNumero"));
        sizePolicy1.setHeightForWidth(lineEditNumero->sizePolicy().hasHeightForWidth());
        lineEditNumero->setSizePolicy(sizePolicy1);
        lineEditNumero->setFont(font);

        gridLayout->addWidget(lineEditNumero, 2, 3, 1, 1);

        labelDDI = new QLabel(gridLayoutWidget);
        labelDDI->setObjectName(QString::fromUtf8("labelDDI"));
        sizePolicy.setHeightForWidth(labelDDI->sizePolicy().hasHeightForWidth());
        labelDDI->setSizePolicy(sizePolicy);
        labelDDI->setFont(font);

        gridLayout->addWidget(labelDDI, 1, 0, 1, 1);

        labelDDD = new QLabel(gridLayoutWidget);
        labelDDD->setObjectName(QString::fromUtf8("labelDDD"));
        sizePolicy.setHeightForWidth(labelDDD->sizePolicy().hasHeightForWidth());
        labelDDD->setSizePolicy(sizePolicy);
        labelDDD->setFont(font);

        gridLayout->addWidget(labelDDD, 1, 2, 1, 1);

        labelNumero = new QLabel(gridLayoutWidget);
        labelNumero->setObjectName(QString::fromUtf8("labelNumero"));
        sizePolicy.setHeightForWidth(labelNumero->sizePolicy().hasHeightForWidth());
        labelNumero->setSizePolicy(sizePolicy);
        labelNumero->setFont(font);

        gridLayout->addWidget(labelNumero, 1, 3, 1, 1);

        lineEditDDI = new QLineEdit(gridLayoutWidget);
        lineEditDDI->setObjectName(QString::fromUtf8("lineEditDDI"));
        sizePolicy1.setHeightForWidth(lineEditDDI->sizePolicy().hasHeightForWidth());
        lineEditDDI->setSizePolicy(sizePolicy1);
        lineEditDDI->setFont(font);

        gridLayout->addWidget(lineEditDDI, 2, 0, 1, 1);

        labelTelefone_2 = new QLabel(telaDeAlteracoes);
        labelTelefone_2->setObjectName(QString::fromUtf8("labelTelefone_2"));
        labelTelefone_2->setGeometry(QRect(60, 210, 81, 41));
        sizePolicy.setHeightForWidth(labelTelefone_2->sizePolicy().hasHeightForWidth());
        labelTelefone_2->setSizePolicy(sizePolicy);
        labelTelefone_2->setFont(font);
        layoutWidget = new QWidget(telaDeAlteracoes);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 170, 521, 41));
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        layoutWidget->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelEmail = new QLabel(layoutWidget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));
        sizePolicy.setHeightForWidth(labelEmail->sizePolicy().hasHeightForWidth());
        labelEmail->setSizePolicy(sizePolicy);
        labelEmail->setFont(font);

        horizontalLayout_4->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        sizePolicy1.setHeightForWidth(lineEditEmail->sizePolicy().hasHeightForWidth());
        lineEditEmail->setSizePolicy(sizePolicy1);
        lineEditEmail->setFont(font);

        horizontalLayout_4->addWidget(lineEditEmail);

        labelTELA = new QLabel(telaDeAlteracoes);
        labelTELA->setObjectName(QString::fromUtf8("labelTELA"));
        labelTELA->setGeometry(QRect(210, 20, 191, 41));
        pushButton = new QPushButton(telaDeAlteracoes);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 68, 141, 41));
        layoutWidget1 = new QWidget(telaDeAlteracoes);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 380, 251, 51));
        sizePolicy.setHeightForWidth(layoutWidget1->sizePolicy().hasHeightForWidth());
        layoutWidget1->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonSalvar = new QPushButton(layoutWidget1);
        pushButtonSalvar->setObjectName(QString::fromUtf8("pushButtonSalvar"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonSalvar->sizePolicy().hasHeightForWidth());
        pushButtonSalvar->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(pushButtonSalvar);

        layoutWidget2 = new QWidget(telaDeAlteracoes);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 70, 102, 41));
        sizePolicy.setHeightForWidth(layoutWidget2->sizePolicy().hasHeightForWidth());
        layoutWidget2->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelID = new QLabel(layoutWidget2);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        sizePolicy.setHeightForWidth(labelID->sizePolicy().hasHeightForWidth());
        labelID->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        labelID->setFont(font1);

        horizontalLayout->addWidget(labelID);

        lineEditID = new QLineEdit(layoutWidget2);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        sizePolicy1.setHeightForWidth(lineEditID->sizePolicy().hasHeightForWidth());
        lineEditID->setSizePolicy(sizePolicy1);
        lineEditID->setFont(font);

        horizontalLayout->addWidget(lineEditID);

        layoutWidget3 = new QWidget(telaDeAlteracoes);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 120, 521, 41));
        sizePolicy.setHeightForWidth(layoutWidget3->sizePolicy().hasHeightForWidth());
        layoutWidget3->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelNome = new QLabel(layoutWidget3);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));
        sizePolicy.setHeightForWidth(labelNome->sizePolicy().hasHeightForWidth());
        labelNome->setSizePolicy(sizePolicy);
        labelNome->setFont(font);

        horizontalLayout_6->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget3);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        sizePolicy1.setHeightForWidth(lineEditNome->sizePolicy().hasHeightForWidth());
        lineEditNome->setSizePolicy(sizePolicy1);
        lineEditNome->setFont(font);

        horizontalLayout_6->addWidget(lineEditNome);

        layoutWidget4 = new QWidget(telaDeAlteracoes);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(410, 320, 171, 41));
        sizePolicy.setHeightForWidth(layoutWidget4->sizePolicy().hasHeightForWidth());
        layoutWidget4->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelNumero_2 = new QLabel(layoutWidget4);
        labelNumero_2->setObjectName(QString::fromUtf8("labelNumero_2"));
        sizePolicy.setHeightForWidth(labelNumero_2->sizePolicy().hasHeightForWidth());
        labelNumero_2->setSizePolicy(sizePolicy);
        labelNumero_2->setFont(font);

        horizontalLayout_3->addWidget(labelNumero_2);

        lineEditNumEnde = new QLineEdit(layoutWidget4);
        lineEditNumEnde->setObjectName(QString::fromUtf8("lineEditNumEnde"));
        sizePolicy1.setHeightForWidth(lineEditNumEnde->sizePolicy().hasHeightForWidth());
        lineEditNumEnde->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lineEditNumEnde);

        layoutWidget5 = new QWidget(telaDeAlteracoes);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(60, 320, 351, 41));
        sizePolicy.setHeightForWidth(layoutWidget5->sizePolicy().hasHeightForWidth());
        layoutWidget5->setSizePolicy(sizePolicy);
        horizontalLayout_7 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelEndereco = new QLabel(layoutWidget5);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));
        sizePolicy.setHeightForWidth(labelEndereco->sizePolicy().hasHeightForWidth());
        labelEndereco->setSizePolicy(sizePolicy);
        labelEndereco->setFont(font);

        horizontalLayout_7->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget5);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));
        sizePolicy1.setHeightForWidth(lineEditEndereco->sizePolicy().hasHeightForWidth());
        lineEditEndereco->setSizePolicy(sizePolicy1);
        lineEditEndereco->setFont(font);

        horizontalLayout_7->addWidget(lineEditEndereco);

        QWidget::setTabOrder(lineEditID, lineEditNome);
        QWidget::setTabOrder(lineEditNome, lineEditEmail);
        QWidget::setTabOrder(lineEditEmail, lineEditDDI);
        QWidget::setTabOrder(lineEditDDI, lineEditDDD);
        QWidget::setTabOrder(lineEditDDD, lineEditNumero);
        QWidget::setTabOrder(lineEditNumero, lineEditEndereco);
        QWidget::setTabOrder(lineEditEndereco, lineEditNumEnde);
        QWidget::setTabOrder(lineEditNumEnde, pushButton);
        QWidget::setTabOrder(pushButton, pushButtonSalvar);

        retranslateUi(telaDeAlteracoes);

        QMetaObject::connectSlotsByName(telaDeAlteracoes);
    } // setupUi

    void retranslateUi(QDialog *telaDeAlteracoes)
    {
        telaDeAlteracoes->setWindowTitle(QCoreApplication::translate("telaDeAlteracoes", "Dialog", nullptr));
        labelDDI->setText(QCoreApplication::translate("telaDeAlteracoes", "<html><head/><body><p align=\"center\">DDI</p></body></html>", nullptr));
        labelDDD->setText(QCoreApplication::translate("telaDeAlteracoes", "<html><head/><body><p align=\"center\">DDD</p></body></html>", nullptr));
        labelNumero->setText(QCoreApplication::translate("telaDeAlteracoes", "<html><head/><body><p align=\"center\">N\303\272mero</p></body></html>", nullptr));
        labelTelefone_2->setText(QCoreApplication::translate("telaDeAlteracoes", "<html><head/><body><p><span style=\" font-size:10pt;\">Telefone</span></p></body></html>", nullptr));
        labelEmail->setText(QCoreApplication::translate("telaDeAlteracoes", "Email", nullptr));
        labelTELA->setText(QCoreApplication::translate("telaDeAlteracoes", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; text-decoration: underline;\">\303\201rea de Altera\303\247\303\265es</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("telaDeAlteracoes", "Mostrar Consultor", nullptr));
        pushButtonSalvar->setText(QCoreApplication::translate("telaDeAlteracoes", "Salvar", nullptr));
        labelID->setText(QCoreApplication::translate("telaDeAlteracoes", "ID", nullptr));
        labelNome->setText(QCoreApplication::translate("telaDeAlteracoes", "Nome", nullptr));
        labelNumero_2->setText(QCoreApplication::translate("telaDeAlteracoes", " N\303\272mero", nullptr));
        labelEndereco->setText(QCoreApplication::translate("telaDeAlteracoes", "Endere\303\247o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaDeAlteracoes: public Ui_telaDeAlteracoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADEALTERACOES_H
