#pragma once
#include <iostream>
using namespace std;

class Veiculo
{
protected:
	int peso, velMax, preco;

public:
	Veiculo();
	Veiculo(int peso, int velMax, int preco);
	void printVeiculo();
};

class Motor
{
protected:
	int numCil, pot;

public:
	Motor();
	Motor(int numCil, int pot);
	void printMotor();

};

class CarroPasseio : public Veiculo,  public Motor
{
private:
	string modelo, cor;

public:
	CarroPasseio(string m, string c, int p, int v, int prc, int num, int pt);
	void printCarroPasseio();
};