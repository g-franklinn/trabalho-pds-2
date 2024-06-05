#include "Gerente.hpp"
#include <iostream>

Gerente::Gerente(const string& nome, int id, double salarioBase, double bonusAnual)
    : Funcionario(nome, id, salarioBase), bonusAnual(bonusAnual) {}

double Gerente::calcularSalarioTotal() const {
    return salarioBase + bonusAnual;
}

void Gerente::exibirInformacoes() const {
    Funcionario::exibirInformacoes();
    cout << "Bônus Anual: " << bonusAnual << endl;
}
