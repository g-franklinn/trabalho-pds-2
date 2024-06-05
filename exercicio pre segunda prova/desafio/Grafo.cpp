#include "Grafo.hpp"
#include <iostream>

Grafo::Grafo(int numVertices) {
    this->numVertices = numVertices;
    adjList.resize(numVertices);
}

void Grafo::adicionarAresta(int v, int w) {
    adjList[v].push_back(w);
    adjList[w].push_back(v);
}

// Verifica se dois vertices sao vizinhos
bool Grafo::saoVizinhos(int v, int w) {
    for (int vizinho : adjList[v]) {
        if (vizinho == w) {
            return true;
        }
    }
    return false;
}

// Obtem lista de vertices vizinhos
std::list<int> Grafo::obterVizinhos(int v) {
    return adjList[v];
}

// Imprime o grafo
void Grafo::exibirGrafo() {
    for (int i = 0; i < numVertices; i++) {
        std::cout << "Vertice " << i << ": ";
        for (int vizinho : adjList[i]) {
            std::cout << vizinho << " ";
        }
        std::cout << std::endl;
    }
}