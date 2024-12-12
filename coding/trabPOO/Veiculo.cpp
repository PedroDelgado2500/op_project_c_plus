#include "Veiculo.h"
#include <iostream>

Veiculo::Veiculo() {
	marca = "Desconhecida";
	modelo = "Desconhecido";
	anoDeFabrico = 0;

}
Veiculo::Veiculo(string mar, string mod, int ano) {
	inicializa(mar, mod, ano);
}
string Veiculo::getMarca() { return marca; }
string Veiculo::getModelo() { return modelo; }
int Veiculo::getAnoDeFabrico() { return anoDeFabrico; }
void Veiculo::setMarca(string mar) { marca = mar; }
void Veiculo::setModelo(string mod) { modelo = mod; }
void Veiculo::setAnodeFabrico(int ano) { anoDeFabrico = ano; }
void Veiculo::inicializa(string mar, string mod, int ano) {
	marca = mar;
	modelo = mod;
	anoDeFabrico = ano;
}
bool Veiculo::addServico(string dat, string tip, string anot, float cst) {
	Servico s(dat, tip, anot, cst);
	return servicos.insert(s);
}
Servico* Veiculo::findServico(string anot){
	Servico s("", "", anot, 0);
	return servicos.find(s);
}
void Veiculo::eraseServico(string anot){
	Servico* s = findServico(anot);
	if (s != NULL) { servicos.erase(*s); }
}
int Veiculo::sizeServico()const{
	return servicos.size();
}

void Veiculo::printVeiculo()const {
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
	cout << "Ano de Fabrico: " << anoDeFabrico << endl<<endl;
}

void Veiculo::listarServicos() {
	for (it = servicos.begin(); it != servicos.end(); it++)
		it->printServico();
}
float Veiculo::custoServico() {
	float total = 0.0;
	for (it = servicos.begin(); it != servicos.end(); it++)
		total += it->getCusto();
		return total;
}