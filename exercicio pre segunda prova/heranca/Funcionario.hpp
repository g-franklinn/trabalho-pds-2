#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
    int id;
    double salarioBase;

public:
    Funcionario(const string& nome, int id, double salarioBase);
    virtual double calcularSalarioTotal() const;
    virtual void exibirInformacoes() const;
    virtual ~Funcionario();
};

#endif