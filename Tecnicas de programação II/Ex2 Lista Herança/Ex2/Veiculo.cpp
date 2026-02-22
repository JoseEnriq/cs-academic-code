#include "Veiculo.h"
#include <iostream>
using namespace std;

Veiculo::Veiculo()
{
	this->peso = 0;
	this->velMax = 0;
	this->preco = 0;
}

Veiculo::Veiculo(int peso, int velMax, int preco)
{
	this->peso = peso;
	this->velMax = velMax;
	this->preco = preco;
}

void Veiculo::printVeiculo()
{
	cout << "Peso:" << peso << endl;
	cout << "VelMax: " << velMax << endl;
	cout << "Preco: " << preco << endl;
}

Motor::Motor()
{
	this->numCil = 0;
	this->pot = 0;
}

Motor::Motor(int numCil, int pot)
{
	this->numCil = numCil;
	this->pot = pot;
}

void Motor::printMotor()
{
	cout << "Numero de cilindros: " << numCil << endl;
	cout << "Potencia: " << pot << endl;
}

CarroPasseio::CarroPasseio(string m, string c, int p, int v, int prc, int num, int pt):
	Veiculo(p, v, prc), Motor(num, pt) {
	modelo = m;
	cor = c;
}
	


void CarroPasseio::printCarroPasseio()
{
	printVeiculo();
	printMotor();
	
	cout << "Modelo: " << modelo << endl;
	cout << "Cor: " << cor << endl;
}