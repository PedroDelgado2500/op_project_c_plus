#pragma once
#include "Veiculo.h"

#include <iostream>

using namespace std;

class Automovel : public Veiculo{
	int nrPortas;

public:
	Automovel();
	Automovel(int nP, string mar, string mod, int ano);
	int getnPortas();
	void setPortas(int nP);
	void inicializa(int nP);
};