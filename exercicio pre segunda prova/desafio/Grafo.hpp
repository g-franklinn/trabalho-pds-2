#ifndef GRAFO
#define GRAFO

#include <vector>
#include <list>

class Grafo {
private:
    int numVertices;
    std::vector<std::list<int>> adjList;

public:
    Grafo(int numVertices);
    void adicionarAresta(int v, int w);
    bool saoVizinhos(int v, int w);
    std::list<int> obterVizinhos(int v);
    void exibirGrafo();
};

#endif