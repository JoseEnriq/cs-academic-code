/********************************************************************************
** Form generated from reading UI file 'telaprojeto.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPROJETO_H
#define UI_TELAPROJETO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TelaProjeto
{
public:

    void setupUi(QDialog *TelaProjeto)
    {
        if (TelaProjeto->objectName().isEmpty())
            TelaProjeto->setObjectName(QString::fromUtf8("TelaProjeto"));
        TelaProjeto->resize(400, 300);

        retranslateUi(TelaProjeto);

        QMetaObject::connectSlotsByName(TelaProjeto);
    } // setupUi

    void retranslateUi(QDialog *TelaProjeto)
    {
        TelaProjeto->setWindowTitle(QCoreApplication::translate("TelaProjeto", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaProjeto: public Ui_TelaProjeto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPROJETO_H
