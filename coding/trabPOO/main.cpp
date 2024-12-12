#include <iostream>
#include "Automovel.h"
#include "LogServico.h"
#include "Motociclo.h"
#include "Proprietario.h"
#include "Servico.h"
#include "Veiculo.h"

using namespace std;

int main() {

    Veiculo v1("Opel", "Astra", 2021);
    v1.addServico("15/07/2023", "Troca de oleo", "Troca de oleo do motor", 50.98);
    v1.addServico("25/11/2023", "Revisao", "Revisao geral", 113.14);

    cout << "Servicos do Veiculo:" << endl << endl;
    v1.listarServicos();

    float custoTotalVeiculo = v1.custoServico();
    cout << "Custo total dos servicos do Veiculo: " << custoTotalVeiculo << " Euros" << endl << endl;

    Automovel a1;
    a1.setMarca("Renault");
    a1.setModelo("Clio");
    a1.setAnodeFabrico(2022);
    a1.setPortas(4);
    a1.addServico("03/03/2023", "Limpeza", "Limpeza interna e externa", 30.23);

    Motociclo m1;
    m1.setMarca("BMW");
    m1.setModelo("Super Fast");
    m1.setAnodeFabrico(2023);
    m1.setNrRodas(2);
    m1.addServico("04/04/2023", "Troca de pneus", "Troca dos pneus dianteiros", 80.12);

    Proprietario p1("Hugh Jackman");

    p1.addVeiculo(v1);
    p1.addVeiculo(a1);
    p1.addVeiculo(m1);

 
    p1.listarVeiculos();
    cout << endl;

    LogServico logServico("Logistica de Servico de Lisboa");

    logServico.addProprietario(p1);

    Proprietario* encontrado = logServico.findProprietario("Hugh Jackman");
    if (encontrado != NULL) {
        encontrado->eraseVeiculo("Opel", "Astra", 2021);
    }

    logServico.eraseProprietario("Hugh Jackman");

    float custoTotalAutomovel = a1.custoServico();
    cout << "Custo total dos servicos do Automovel: " << custoTotalAutomovel << " Euros" << endl;

    float custoTotalMotociclo = m1.custoServico();
    cout << "Custo total dos servicos do Motociclo: " << custoTotalMotociclo << " Euros" << endl;

  
    float custoTotal = custoTotalAutomovel + custoTotalMotociclo;
    cout << "Custo total dos servicos do Automovel e Motociclo: " << custoTotal << " Euros" << endl;

    return 0;
}
