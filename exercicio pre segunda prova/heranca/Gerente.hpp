#ifndef GERENTE
#define GERENTE

#include "Funcionario.hpp"

class Gerente : public Funcionario {
private:
    double bonusAnual;

public:
    Gerente(const string& nome, int id, double salarioBase, double bonusAnual);
    double calcularSalarioTotal() const override;
    void exibirInformacoes() const override;
};

#endif