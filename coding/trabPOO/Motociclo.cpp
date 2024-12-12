#include "Motociclo.h"
#include <iostream>

Motociclo::Motociclo() { nrRodas = 0; }
Motociclo::Motociclo(int rodas, string mar, string mod, int ano) :Veiculo( mar,  mod,  ano){ inicializa(rodas); }
int Motociclo::getNrRodas() { return nrRodas; }
void Motociclo::setNrRodas(int rodas) { nrRodas = rodas; }
void Motociclo::inicializa(int rodas) {
	nrRodas = rodas;
}