#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(const string& nome, int id, double salarioBase)
    : nome(nome), id(id), salarioBase(salarioBase) {}

double Funcionario::calcularSalarioTotal() const {
    return salarioBase;
}

void Funcionario::exibirInformacoes() const {
    cout << "Nome: " << nome << ", ID: " << id << ", Salario Base: " << salarioBase << endl;
}

Funcionario::~Funcionario() = default;