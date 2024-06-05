#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "Funcionario.hpp"

class Estagiario : public Funcionario {
public:
    Estagiario(const string& nome, int id, double salarioBase);
    double calcularSalarioTotal() const override;
};

#endif