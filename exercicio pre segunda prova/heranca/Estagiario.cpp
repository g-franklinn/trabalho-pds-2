#include "Estagiario.hpp"

Estagiario::Estagiario(const string& nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase * 0.3) {} // 30% do salario base nesse caso

double Estagiario::calcularSalarioTotal() const {
    return salarioBase;
}
