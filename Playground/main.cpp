#include <iostream>
#include "Vertex.h";
#include "Graph.h";


int main() {

	Graph<int> g;
	g.addVertex(std::make_shared<Vertex<int>>(5, 666));
	g.addVertex(std::make_shared<Vertex<int>>(7, 1));

	g.addEdge(g.findVertex(5), g.findVertex(7));

	g.BFS(g.findVertex(5));
	
	int a;
	std::cin >> a;

	return 0;
}