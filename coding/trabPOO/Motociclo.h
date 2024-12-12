#pragma once
#include <iostream>
#include "Veiculo.h"


class Motociclo : public Veiculo
{
	int nrRodas;
public:
	Motociclo();
	Motociclo(int rodas, string mar, string mod, int ano);
	int getNrRodas();
	void setNrRodas(int rodas);
	void inicializa(int rodas);
};
