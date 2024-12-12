#pragma once
#include <iostream>
#include "Proprietario.h"

class LogServico
{
	string nomeL;
	Colecao<Proprietario> proprietarios;
public:
	LogServico();
	LogServico(string nomLog);
	void inicializa(string nomLog);
	bool addProprietario(const Proprietario& proprietario);
	void eraseProprietario(string nom);
	bool operator<(const LogServico& log)const {
		return nomeL < log.nomeL;
	}
	Proprietario* findProprietario(string nom);

};


