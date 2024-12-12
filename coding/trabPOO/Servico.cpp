#include <iostream>
#include "Servico.h"


Servico::Servico() { data = "Anonima"; tipo = "Desconhecido", anotacao = "Desconhecida", custo = 0.0; }
Servico::Servico(string dat, string tip, string anot, float cst) {
	inicializa(dat, tip, anot, cst);
}
string Servico::getData() { return data; }
string Servico::getTipo() { return tipo; }
string Servico::getAnotacao() { return anotacao; }
float Servico::getCusto()const { return custo; }
void Servico::setData(string dat) { data = dat; }
void Servico::setTipo(string tip) { tipo = tip; }
void Servico::setAnotacao(string anot) { anotacao = anot; }
void Servico::setCusto(float cst) { custo = cst; }
	void Servico::inicializa(string dat, string tip, string anot, float cst) {
		data = dat;
		tipo = tip;
		anotacao = anot;
		custo = cst;
	}

	void Servico::printServico() const{
		cout<<"Data do Servico: "<<data << endl;
		cout << "Tipo de Servico: " << tipo << endl;
		cout << "Anotacoes do Servico: " << anotacao << endl;
		cout << "Custo do Servico: " << custo <<" Euros"<< endl << endl;;
	}
	