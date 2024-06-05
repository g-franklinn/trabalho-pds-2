#include "Grafo.hpp"
#include <iostream>

int main() {
    Grafo g(5);  // Cria um grafo com 5 vértices

    g.adicionarAresta(0, 1);
    g.adicionarAresta(0, 4);
    g.adicionarAresta(1, 2);
    g.adicionarAresta(1, 3);
    g.adicionarAresta(1, 4);
    g.adicionarAresta(2, 3);
    g.adicionarAresta(3, 4);

    g.exibirGrafo();

    // Testa se dois vértices são vizinhos
    std::cout << "0 e 1 sao vizinhos? " << (g.saoVizinhos(0, 1) ? "Sim" : "Nao") << std::endl;
    std::cout << "0 e 2 sao vizinhos? " << (g.saoVizinhos(0, 2) ? "Sim" : "Nao") << std::endl;

    // Obtem e exibe os vizinhos de um vértice
    std::list<int> vizinhos = g.obterVizinhos(1);
    std::cout << "Vizinhos de 1: ";
    for (int vizinho : vizinhos) {
        std::cout << vizinho << " ";
    }
    std::cout << std::endl;

    return 0;
}