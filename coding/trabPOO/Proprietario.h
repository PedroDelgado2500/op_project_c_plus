#pragma once
#include <iostream>
#include "Colecao.h"
#include "Veiculo.h"
using namespace std;

class Proprietario
{
	string nome;
	Colecao <Veiculo> veiculos;
	Colecao<Veiculo>::iterator it;//O iterador serve de apontador que aponta para cada elemento da coleção
public:
	Proprietario();
	Proprietario(string nom);
	string getNome();

	void setNome(string nom);
	void inicializa(string nom);
	bool addVeiculo(const Veiculo& veiculo);
	void eraseVeiculo(string mar, string mod, int ano);
	int sizeVeiculo()const;
	void listarVeiculos();

	bool operator<(const Proprietario& prop)const {
		return nome < prop.nome;
	}//Este operador serve para comparar os nomes dos proprietários
	//Se o nome atual for menor do que o nome anterior retorna true
	//Senão, retorna false

		Veiculo* findVeiculo(string mar, string mod, int ano);
};