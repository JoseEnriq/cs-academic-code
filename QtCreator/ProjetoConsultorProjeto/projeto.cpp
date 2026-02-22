#include "projeto.h"
namespace ejm {
projeto::projeto():
    id_Projeto(0),
    descricao(""),
    orcamento(0.0),
    endereco("",0)
{

}
const QString &projeto::getDescricao() const
{
    return descricao;
}

void projeto::setDescricao(const QString &newDescricao)
{
    descricao = newDescricao;
}

float projeto::getOrcamento() const
{
    return orcamento;
}

void projeto::setOrcamento(float newOrcamento)
{
    orcamento = newOrcamento;
}

const Endereco &projeto::getEndereco() const
{
    return endereco;
}

void projeto::setEndereco(const Endereco &newEndereco)
{
    endereco = newEndereco;
}

int projeto::getId_Projeto() const
{
    return id_Projeto;
}

void projeto::setId_Projeto(int newId_Projeto)
{
    id_Projeto = newId_Projeto;
}

QString projeto::toString()const{
    QString saida = QString::number(id_Projeto);
    saida +=";";
    saida += descricao;
    saida +=";";
    saida += QString::number(orcamento);
    saida +=";";
    saida += endereco.toString();
    return saida;
}

}
