#include <iostream>
#include "Proprietario.h"
#include "Veiculo.h"
using namespace std;


Proprietario::Proprietario() {
	nome = "Anonimo";
}
Proprietario::Proprietario(string nom) {
	inicializa(nom);
}
string Proprietario::getNome() { return nome; }

void Proprietario::setNome(string nom) { nome = nom; }

void Proprietario::inicializa(string nom) {
	nome = nom;
}
bool Proprietario::addVeiculo(const Veiculo& veiculo) {
	Veiculo v(veiculo);
	return veiculos.insert(v);
}

Veiculo* Proprietario::findVeiculo(string mar, string mod, int ano) {
	Veiculo v(mar, mod, ano);
	return veiculos.find(v);
}

void Proprietario::eraseVeiculo(string mar, string mod, int ano) {
	Veiculo* v = findVeiculo(mar, mod, ano);
	if (v != NULL) { veiculos.erase(*v); }
}

int Proprietario::sizeVeiculo()const {
	return veiculos.size();
}

void Proprietario::listarVeiculos() {
	cout << "Veiculos do Proprietario " << nome <<":"<< endl;
	for (it = veiculos.begin(); it != veiculos.end(); it++)
		it->printVeiculo();
}