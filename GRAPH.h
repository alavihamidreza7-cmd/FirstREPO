#ifndef GRAPH_H
#define GRAPH_H
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
using namespace std;

class Graph {

private:

    std::map<int, std::set<int>> adj_;
    vector<pair<int ,int>> edges_v;
    void ensure_node_exists(int node) const;

public:

    void add_node(int node);

    void add_edge(int node1, int node2);

    bool is_connected(int node1, int node2) const;

   // std::vector<int> find_path(int node1, int node2) const; // no need to implement

    int degree(int node) const;

    std::vector<int> nodes() const;

    std::vector<std::pair<int, int>> edges() const;

};


















#endif
