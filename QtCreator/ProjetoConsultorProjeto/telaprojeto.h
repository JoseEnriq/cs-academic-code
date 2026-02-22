#ifndef TELAPROJETO_H
#define TELAPROJETO_H

#include <QDialog>

namespace Ui {
class TelaProjeto;
}

class TelaProjeto : public QDialog
{
    Q_OBJECT

public:
    explicit TelaProjeto(QWidget *parent = nullptr);
    ~TelaProjeto();

private:
    Ui::TelaProjeto *ui;
};

#endif // TELAPROJETO_H
