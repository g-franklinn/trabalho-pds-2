#include "FuncionarioRegular.hpp"

FuncionarioRegular::FuncionarioRegular(const string& nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase) {}

double FuncionarioRegular::calcularSalarioTotal() const {
    return salarioBase;
}
