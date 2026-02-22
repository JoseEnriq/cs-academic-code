/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableWidget *tableWidgetContato;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButtonIncluir;
    QPushButton *pushButtonExcluir;
    QPushButton *pushButtonAlterar;
    QPushButton *pushButtonOrdenar;
    QComboBox *comboBox;
    QPushButton *pushButtonProjetos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QString::fromUtf8("TelaPrincipal"));
        TelaPrincipal->resize(1079, 562);
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 1061, 71));
        tableWidgetContato = new QTableWidget(centralwidget);
        if (tableWidgetContato->columnCount() < 5)
            tableWidgetContato->setColumnCount(5);
        QFont font;
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidgetContato->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidgetContato->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidgetContato->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidgetContato->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidgetContato->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetContato->setObjectName(QString::fromUtf8("tableWidgetContato"));
        tableWidgetContato->setGeometry(QRect(30, 170, 1031, 291));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        tableWidgetContato->setFont(font1);
        tableWidgetContato->horizontalHeader()->setMinimumSectionSize(20);
        tableWidgetContato->horizontalHeader()->setDefaultSectionSize(100);
        tableWidgetContato->verticalHeader()->setMinimumSectionSize(10);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 110, 824, 51));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy);
        horizontalLayout_11 = new QHBoxLayout(layoutWidget);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluir = new QPushButton(layoutWidget);
        pushButtonIncluir->setObjectName(QString::fromUtf8("pushButtonIncluir"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonIncluir->sizePolicy().hasHeightForWidth());
        pushButtonIncluir->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(18);
        font2.setBold(true);
        pushButtonIncluir->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/imagens/incluir.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonIncluir->setIcon(icon);
        pushButtonIncluir->setIconSize(QSize(25, 25));

        horizontalLayout_11->addWidget(pushButtonIncluir);

        pushButtonExcluir = new QPushButton(layoutWidget);
        pushButtonExcluir->setObjectName(QString::fromUtf8("pushButtonExcluir"));
        sizePolicy1.setHeightForWidth(pushButtonExcluir->sizePolicy().hasHeightForWidth());
        pushButtonExcluir->setSizePolicy(sizePolicy1);
        pushButtonExcluir->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Users/Pedro/Downloads/lixeira.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonExcluir->setIcon(icon1);
        pushButtonExcluir->setIconSize(QSize(35, 35));

        horizontalLayout_11->addWidget(pushButtonExcluir);

        pushButtonAlterar = new QPushButton(layoutWidget);
        pushButtonAlterar->setObjectName(QString::fromUtf8("pushButtonAlterar"));
        sizePolicy1.setHeightForWidth(pushButtonAlterar->sizePolicy().hasHeightForWidth());
        pushButtonAlterar->setSizePolicy(sizePolicy1);
        pushButtonAlterar->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../Users/Pedro/Downloads/alterar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAlterar->setIcon(icon2);
        pushButtonAlterar->setIconSize(QSize(30, 30));

        horizontalLayout_11->addWidget(pushButtonAlterar);

        pushButtonOrdenar = new QPushButton(layoutWidget);
        pushButtonOrdenar->setObjectName(QString::fromUtf8("pushButtonOrdenar"));
        sizePolicy1.setHeightForWidth(pushButtonOrdenar->sizePolicy().hasHeightForWidth());
        pushButtonOrdenar->setSizePolicy(sizePolicy1);
        pushButtonOrdenar->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/imgs/imagens/ordenar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOrdenar->setIcon(icon3);
        pushButtonOrdenar->setIconSize(QSize(35, 35));

        horizontalLayout_11->addWidget(pushButtonOrdenar);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(70, 43));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        comboBox->setFont(font3);

        horizontalLayout_11->addWidget(comboBox);

        pushButtonProjetos = new QPushButton(centralwidget);
        pushButtonProjetos->setObjectName(QString::fromUtf8("pushButtonProjetos"));
        pushButtonProjetos->setGeometry(QRect(860, 110, 211, 49));
        sizePolicy1.setHeightForWidth(pushButtonProjetos->sizePolicy().hasHeightForWidth());
        pushButtonProjetos->setSizePolicy(sizePolicy1);
        pushButtonProjetos->setFont(font2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/imgs/imagens/projeto.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonProjetos->setIcon(icon4);
        pushButtonProjetos->setIconSize(QSize(30, 30));
        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 26));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaPrincipal->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButtonIncluir, pushButtonExcluir);
        QWidget::setTabOrder(pushButtonExcluir, pushButtonAlterar);
        QWidget::setTabOrder(pushButtonAlterar, pushButtonOrdenar);
        QWidget::setTabOrder(pushButtonOrdenar, tableWidgetContato);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QCoreApplication::translate("TelaPrincipal", "TelaPrincipal", nullptr));
        label->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; font-weight:700; color:#0433ff;\">AGENDA DE CONSULTORES</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetContato->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TelaPrincipal", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetContato->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TelaPrincipal", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetContato->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TelaPrincipal", "EMAIL", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetContato->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TelaPrincipal", "TELEFONE", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetContato->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TelaPrincipal", "ENDERE\303\207O", nullptr));
        pushButtonIncluir->setText(QCoreApplication::translate("TelaPrincipal", "INCLUIR", nullptr));
        pushButtonExcluir->setText(QCoreApplication::translate("TelaPrincipal", "EXCLUIR", nullptr));
        pushButtonAlterar->setText(QCoreApplication::translate("TelaPrincipal", "ALTERAR", nullptr));
        pushButtonOrdenar->setText(QCoreApplication::translate("TelaPrincipal", "ORDENAR", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TelaPrincipal", "ID", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TelaPrincipal", "Nome", nullptr));

#if QT_CONFIG(whatsthis)
        comboBox->setWhatsThis(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButtonProjetos->setText(QCoreApplication::translate("TelaPrincipal", "PROJETOS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
