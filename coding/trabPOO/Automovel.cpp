#include "Automovel.h"
Automovel::Automovel() :Veiculo() { }
Automovel::Automovel(int nP, string mar, string mod, int ano) :Veiculo(mar, mod, ano) { inicializa(nP); }
int Automovel::getnPortas() { return nrPortas; }
void Automovel::setPortas(int nP) { nrPortas = nP; }
void Automovel::inicializa(int nP) { nrPortas = nP; }