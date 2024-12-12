#pragma once
#include <iostream>
#include "Colecao.h"

using namespace std;

class Servico
{
	string data;
	string tipo;
	string anotacao;
	float custo;
	Colecao <Servico>::iterator it;
public:
	Servico();
	Servico(string dat, string tip, string anot, float cst);
	string getData();
	string getTipo();
	string getAnotacao();
	float getCusto()const;
	void setData(string dat);
	void setTipo(string tip);
	void setAnotacao(string anot);
	void setCusto(float cst);
	void inicializa(string dat, string tip, string anot, float cst);
	void printServico()const;
	bool operator<(const Servico &serv)const {
		return anotacao < serv.anotacao;}

};