#include "LogServico.h"
LogServico::LogServico() {}
LogServico::LogServico(string nomLog) { inicializa(nomLog); }
void LogServico::inicializa(string nomLog) { nomeL = nomLog; }
bool LogServico::addProprietario(const Proprietario& proprietario) {
	Proprietario p(proprietario);
	return proprietarios.insert(p);
}
Proprietario* LogServico::findProprietario(string nom) {
	Proprietario p(nom);
	return proprietarios.find(p);
}
void LogServico::eraseProprietario(string nom) {
	Proprietario* p = findProprietario(nom);
	if (p != NULL) { proprietarios.erase(*p); }
}