#pragma once

#include <memory>
#include <list>

template<class T>
class Vertex {
public:
	int weight;
	T value;
	Vertex(T v, int w);
};

template<class T>
using VertexPtr = std::shared_ptr<Vertex<T>>;

template<class T>
using VertexList = std::list<VertexPtr<T>>;