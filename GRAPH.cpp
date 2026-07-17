#include <iostream>
#include <deque>
#include <queue>
#include <vector>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <list>
#include <string>
#include <algorithm>
#include <numeric>
#include <chrono>
#include "GRAPH.h"
using namespace std;

void Graph::add_node(int node) {
	auto Finding = adj_.find(node);
	if (Finding == adj_.end()) {
		adj_[node];
		//adj_.insert(node, set<int>{});
	
	}
	else {
		throw invalid_argument{ " This Vertex Already Exist : "+ to_string(node) };
	}
}
void Graph::add_edge(int node1, int node2) {
	if (node1 == node2)
		throw invalid_argument{ "We can not add this Edge : ( "+to_string(node1)+" , "+to_string(node2)+" )"};

	auto it = adj_.find(node1);
	auto it2 = adj_.find(node2);
	if (it != adj_.end() && it2 != adj_.end()) {
		int s1 = it->second.size();
		it->second.insert(node2);
		int s2 = it->second.size();
		if (s1 != s2) {
			if (node1 <= node2) {
				pair<int, int> a;
				a.first = node1;
				a.second = node2;
				edges_v.push_back(a);
			}
			else {
				pair<int, int> a;
				a.first = node2;
				a.second = node1;
				edges_v.push_back(a);
			}
		}
		it2->second.insert(node1);
	}
	else {
		throw invalid_argument{ "One component of this edge ( " + to_string(node1) + " , " + to_string(node2) + " )" " is not exist then we can not connect an edge to it." };
	}
	
}
bool Graph::is_connected(int node1, int node2) const {
	auto it = adj_.find(node1);
	if (it != adj_.end()) {
		auto it2 = it->second.find(node2);
		if (it2 != it->second.end()) {
			return true;
		}
	}
	else {
		throw invalid_argument{ "We can not add this edge  ( "+to_string(node1)+" , "+to_string(node2)+" )" " because one of Vertexes is not exist::" };
	}
	return false;
}
int Graph::degree(int node) const {
	ensure_node_exists(node);
	auto it = adj_.find(node);
	int i = it->second.size();
	return i;
}
std::vector<int> Graph::nodes() const {
	vector<int> returning;
	auto it = adj_.begin();
	for (it; it != adj_.end(); ++it)
		returning.push_back((*it).first);
	return returning;
}

std::vector<std::pair<int, int>> Graph::edges() const {
	return edges_v;
}
void Graph::ensure_node_exists(int node) const {
	auto it = adj_.find(node);
	if (it != adj_.end())
		return;
	else
		throw invalid_argument{ "This node(Vertex)"+to_string(node) +" is not exist so,we can not do what yo request" };
}