#ifndef FUNCIONARIOREGULAR
#define FUNCIONARIOREGULAR

#include "Funcionario.hpp"

class FuncionarioRegular : public Funcionario {
public:
    FuncionarioRegular(const string& nome, int id, double salarioBase);
    double calcularSalarioTotal() const override;
};

#endif