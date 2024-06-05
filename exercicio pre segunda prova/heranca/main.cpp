#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Criando objetos de cada tipo de funcionário
    FuncionarioRegular funcionarioRegular("Joaozinho", 1, 4000.00);
    Gerente gerente("Mariazinha", 2, 12000.00, 3000.00);
    Estagiario estagiario("Pedrinho", 3, 2500.00);

    // Vetor de ponteiros para armazenar os funcionários
    vector<Funcionario*> funcionarios = { &funcionarioRegular, &gerente, &estagiario };

    // Exibindo informações e salários totais de cada funcionário
    for (const auto& funcionario : funcionarios) {
        funcionario->exibirInformacoes();
        cout << "Salario Total: " << funcionario->calcularSalarioTotal() << endl << endl;
    }

    return 0;
}