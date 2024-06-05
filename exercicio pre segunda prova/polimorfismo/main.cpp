#include "Caminhao.hpp"
#include "Van.hpp"
#include <vector>

int main() {
    // Exemplos de objetos
    Caminhao caminhao("Dodge", "modelo1", 25, 4);
    Van van("Mercedes", "modelo1", 3, 12);

    // Vetor de ponteiros para armazenar os veículos
    std::vector<Veiculo*> veiculos = { &caminhao, &van };

    // Exibindo informações de cada veículo
    for (const auto& veiculo : veiculos) {
        veiculo->exibirDados();
        std::cout << std::endl;
    }

    return 0;
}