#pragma once
#include <iostream>
#include "Servico.h"
#include "Colecao.h"

using namespace std;

class Veiculo
{
	string marca;
	string modelo;
	int anoDeFabrico;
	Colecao<Servico> servicos;
	Colecao<Servico>::iterator it;

public:
	Veiculo();
	Veiculo(string mar, string mod, int ano);
	string getMarca();
	string getModelo();
	int getAnoDeFabrico();
	void setMarca(string mar);
	void setModelo(string mod);
	void setAnodeFabrico(int ano);
	void inicializa(string mar, string mod, int ano);
	bool addServico(string dat, string tip, string anot, float cst);
	void eraseServico(string anot);
	int sizeServico()const;
	bool operator<(const Veiculo& veic)const {
		return marca < veic.marca&& modelo < veic.modelo&& anoDeFabrico < veic.anoDeFabrico;
	}
	void printVeiculo()const;
	void listarServicos();
	float custoServico();
private:
	Servico* findServico(string anot);
	//coloquei esse método como privado porque estou a dar lhe a restrição
	//para que apenas a classe Veiculo tenha permissão para fazer procura
	//dos seus servicos, pois cada veículo tem sua coleção de servicos.
	//Isso tambem serve para as outras classes.
	//Ou seja, é uma abordagem de encapsulamento
};
