#pragma once

#include "Vertex.h";

#include <map>
#include <vector>
#include <queue>

template<typename T>
class Graph {
private:
	std::map<VertexPtr<T>, VertexList<T>> graph;
public:
	Graph();
	VertexPtr<T> findVertex(T value);
	void addVertex(const VertexPtr<T>& ptr);
	void addEdge(const VertexPtr<T>& from, const VertexPtr<T>& to);
	void BFS(const VertexPtr<T>& start);
};