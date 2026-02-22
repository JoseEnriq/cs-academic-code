/********************************************************************************
** Form generated from reading UI file 'telainclusao.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINCLUSAO_H
#define UI_TELAINCLUSAO_H

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

class Ui_TelaInclusao
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelEndereco;
    QLineEdit *lineEditEndereco;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonInclusao;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNome;
    QLineEdit *lineEditNome;
    QPushButton *pushButton;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelEmail;
    QLineEdit *lineEditEmail;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *labelID;
    QLineEdit *lineEditID;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelNumero_2;
    QLineEdit *lineEditNumEnde;
    QLabel *labelTELA;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditDDD;
    QLineEdit *lineEditNumero;
    QLabel *labelDDI;
    QLabel *labelDDD;
    QLabel *labelNumero;
    QLineEdit *lineEditDDI;
    QLabel *labelTelefone_2;

    void setupUi(QDialog *TelaInclusao)
    {
        if (TelaInclusao->objectName().isEmpty())
            TelaInclusao->setObjectName(QString::fromUtf8("TelaInclusao"));
        TelaInclusao->resize(728, 524);
        layoutWidget = new QWidget(TelaInclusao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 350, 351, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelEndereco = new QLabel(layoutWidget);
        labelEndereco->setObjectName(QString::fromUtf8("labelEndereco"));
        sizePolicy.setHeightForWidth(labelEndereco->sizePolicy().hasHeightForWidth());
        labelEndereco->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        labelEndereco->setFont(font);

        horizontalLayout_7->addWidget(labelEndereco);

        lineEditEndereco = new QLineEdit(layoutWidget);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditEndereco->sizePolicy().hasHeightForWidth());
        lineEditEndereco->setSizePolicy(sizePolicy1);
        lineEditEndereco->setFont(font);

        horizontalLayout_7->addWidget(lineEditEndereco);

        layoutWidget_2 = new QWidget(TelaInclusao);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(230, 410, 251, 51));
        sizePolicy.setHeightForWidth(layoutWidget_2->sizePolicy().hasHeightForWidth());
        layoutWidget_2->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonInclusao = new QPushButton(layoutWidget_2);
        pushButtonInclusao->setObjectName(QString::fromUtf8("pushButtonInclusao"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonInclusao->sizePolicy().hasHeightForWidth());
        pushButtonInclusao->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(pushButtonInclusao);

        layoutWidget_3 = new QWidget(TelaInclusao);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(100, 150, 521, 41));
        sizePolicy.setHeightForWidth(layoutWidget_3->sizePolicy().hasHeightForWidth());
        layoutWidget_3->setSizePolicy(sizePolicy);
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelNome = new QLabel(layoutWidget_3);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));
        sizePolicy.setHeightForWidth(labelNome->sizePolicy().hasHeightForWidth());
        labelNome->setSizePolicy(sizePolicy);
        labelNome->setFont(font);

        horizontalLayout_6->addWidget(labelNome);

        lineEditNome = new QLineEdit(layoutWidget_3);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        sizePolicy1.setHeightForWidth(lineEditNome->sizePolicy().hasHeightForWidth());
        lineEditNome->setSizePolicy(sizePolicy1);
        lineEditNome->setFont(font);

        horizontalLayout_6->addWidget(lineEditNome);

        pushButton = new QPushButton(TelaInclusao);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 98, 141, 41));
        layoutWidget_4 = new QWidget(TelaInclusao);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(100, 200, 521, 41));
        sizePolicy.setHeightForWidth(layoutWidget_4->sizePolicy().hasHeightForWidth());
        layoutWidget_4->setSizePolicy(sizePolicy);
        layoutWidget_4->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelEmail = new QLabel(layoutWidget_4);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));
        sizePolicy.setHeightForWidth(labelEmail->sizePolicy().hasHeightForWidth());
        labelEmail->setSizePolicy(sizePolicy);
        labelEmail->setFont(font);

        horizontalLayout_4->addWidget(labelEmail);

        lineEditEmail = new QLineEdit(layoutWidget_4);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        sizePolicy1.setHeightForWidth(lineEditEmail->sizePolicy().hasHeightForWidth());
        lineEditEmail->setSizePolicy(sizePolicy1);
        lineEditEmail->setFont(font);

        horizontalLayout_4->addWidget(lineEditEmail);

        layoutWidget_5 = new QWidget(TelaInclusao);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(100, 100, 102, 41));
        sizePolicy.setHeightForWidth(layoutWidget_5->sizePolicy().hasHeightForWidth());
        layoutWidget_5->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelID = new QLabel(layoutWidget_5);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        sizePolicy.setHeightForWidth(labelID->sizePolicy().hasHeightForWidth());
        labelID->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        labelID->setFont(font1);

        horizontalLayout->addWidget(labelID);

        lineEditID = new QLineEdit(layoutWidget_5);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        sizePolicy1.setHeightForWidth(lineEditID->sizePolicy().hasHeightForWidth());
        lineEditID->setSizePolicy(sizePolicy1);
        lineEditID->setFont(font);

        horizontalLayout->addWidget(lineEditID);

        layoutWidget_6 = new QWidget(TelaInclusao);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(450, 350, 171, 41));
        sizePolicy.setHeightForWidth(layoutWidget_6->sizePolicy().hasHeightForWidth());
        layoutWidget_6->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelNumero_2 = new QLabel(layoutWidget_6);
        labelNumero_2->setObjectName(QString::fromUtf8("labelNumero_2"));
        sizePolicy.setHeightForWidth(labelNumero_2->sizePolicy().hasHeightForWidth());
        labelNumero_2->setSizePolicy(sizePolicy);
        labelNumero_2->setFont(font);

        horizontalLayout_3->addWidget(labelNumero_2);

        lineEditNumEnde = new QLineEdit(layoutWidget_6);
        lineEditNumEnde->setObjectName(QString::fromUtf8("lineEditNumEnde"));
        sizePolicy1.setHeightForWidth(lineEditNumEnde->sizePolicy().hasHeightForWidth());
        lineEditNumEnde->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lineEditNumEnde);

        labelTELA = new QLabel(TelaInclusao);
        labelTELA->setObjectName(QString::fromUtf8("labelTELA"));
        labelTELA->setGeometry(QRect(250, 50, 191, 41));
        gridLayoutWidget = new QWidget(TelaInclusao);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 280, 521, 61));
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        gridLayoutWidget->setFont(font);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditDDD = new QLineEdit(gridLayoutWidget);
        lineEditDDD->setObjectName(QString::fromUtf8("lineEditDDD"));
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

        labelTelefone_2 = new QLabel(TelaInclusao);
        labelTelefone_2->setObjectName(QString::fromUtf8("labelTelefone_2"));
        labelTelefone_2->setGeometry(QRect(100, 240, 81, 41));
        sizePolicy.setHeightForWidth(labelTelefone_2->sizePolicy().hasHeightForWidth());
        labelTelefone_2->setSizePolicy(sizePolicy);
        labelTelefone_2->setFont(font);

        retranslateUi(TelaInclusao);

        QMetaObject::connectSlotsByName(TelaInclusao);
    } // setupUi

    void retranslateUi(QDialog *TelaInclusao)
    {
        TelaInclusao->setWindowTitle(QCoreApplication::translate("TelaInclusao", "Dialog", nullptr));
        labelEndereco->setText(QCoreApplication::translate("TelaInclusao", "Endere\303\247o", nullptr));
        pushButtonInclusao->setText(QCoreApplication::translate("TelaInclusao", "Incluir", nullptr));
        labelNome->setText(QCoreApplication::translate("TelaInclusao", "Nome", nullptr));
        pushButton->setText(QCoreApplication::translate("TelaInclusao", "Mostrar Consultor", nullptr));
        labelEmail->setText(QCoreApplication::translate("TelaInclusao", "Email", nullptr));
        labelID->setText(QCoreApplication::translate("TelaInclusao", "ID", nullptr));
        labelNumero_2->setText(QCoreApplication::translate("TelaInclusao", " N\303\272mero", nullptr));
        labelTELA->setText(QCoreApplication::translate("TelaInclusao", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; text-decoration: underline;\">\303\201rea de Inclus\303\243o</span></p></body></html>", nullptr));
        labelDDI->setText(QCoreApplication::translate("TelaInclusao", "<html><head/><body><p align=\"center\">DDI</p></body></html>", nullptr));
        labelDDD->setText(QCoreApplication::translate("TelaInclusao", "<html><head/><body><p align=\"center\">DDD</p></body></html>", nullptr));
        labelNumero->setText(QCoreApplication::translate("TelaInclusao", "<html><head/><body><p align=\"center\">N\303\272mero</p></body></html>", nullptr));
        labelTelefone_2->setText(QCoreApplication::translate("TelaInclusao", "<html><head/><body><p><span style=\" font-size:10pt;\">Telefone</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInclusao: public Ui_TelaInclusao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINCLUSAO_H
