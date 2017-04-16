#include "Vertex.h";
#include "Graph.h";

template<typename T>
Graph<T>::Graph() {}

template<typename T>
VertexPtr<T> Graph<T>::findVertex(T value) {
	for (std::pair<VertexPtr<T>, VertexList<T>> kv : this->graph) {
		if (kv.first->value == value) {
			return kv.first;
		}
	}
	return nullptr;
}

template<typename T>
void Graph<T>::addVertex(const VertexPtr<T>& ptr) {
	if (findVertex(ptr->value) == nullptr) {
		this->graph[ptr] = {};
	}
}

template<typename T>
void Graph<T>::addEdge(const VertexPtr<T>& from, const VertexPtr<T>& to) {
	this->graph[from].push_back(to);
}

template<typename T>
void Graph<T>::BFS(const VertexPtr<T>& start) {
	std::queue<VertexPtr<T>> bfs;
	std::map<VertexPtr<T>, bool> visited;

	visited[start] = true;
	bfs.push(start);

	while (!bfs.empty()) {

		VertexPtr<T> curr = bfs.front();
		std::cout << "Current value: " << curr->value << std::endl << std::endl;
		VertexList<T> neightbours = graph[curr];

		for (VertexPtr<T> neightbour : neightbours) {
			std::cout << "Pushing value: " << neightbour->value << std::endl;
			visited[neightbour] = true;
			bfs.push(neightbour);
		}

		bfs.pop();
	}
}