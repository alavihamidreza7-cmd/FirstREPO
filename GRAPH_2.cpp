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
int main(void) {
	try {
		Graph graph;
		graph.add_node(1);
		//graph.add_node(1);
		graph.add_node(2);
		graph.add_node(3);
		graph.add_node(-5);
		graph.add_node(0);
		graph.add_node(12);

		graph.add_edge(1, 2);
		graph.add_edge(2, 3);
		graph.add_edge(2, 3);
		graph.add_edge(3, 0);
		graph.add_edge(0, 12);
		graph.add_edge(0, 12);
		graph.add_edge(0, 12);
		graph.add_edge(12, -5);
		graph.add_edge(12, 1);
		graph.add_edge(12, 2);
		graph.add_edge(12, 3);
		graph.add_edge(0, 2);
		//graph.add_edge(0, 56);


		vector<int> NODES = graph.nodes();
		vector<pair<int, int>> EDGES = graph.edges();

		auto it = NODES.begin();
		for (it; it != NODES.end(); ++it)
			cout << endl << *it;

		for (auto it = EDGES.begin(); it != EDGES.end(); ++it)
			cout << endl << "( " << (*it).first << " , " << (*it).second << " )";

		int i = graph.degree(3);
		cout << endl << i;


		bool isconnected = graph.is_connected(-5, 2);
		if (isconnected == true)
			cout << endl << "OK";
		cout << endl << "error";
		isconnected = graph.is_connected(12,1);
		if (isconnected == true)
			cout << endl << "OK";
		cout << endl << "error";
		isconnected = graph.is_connected(2,-5);
		if (isconnected == true)
			cout << endl << "OK";
		cout << endl << "error";
		isconnected = graph.is_connected(1,3);
		if (isconnected == true)
			cout << endl << "OK";
		cout << endl << "error";
		isconnected = graph.is_connected(-5,0);
		if (isconnected == true)
			cout << endl << "OK";
		cout << endl << "error";



	}
	catch(invalid_argument& e){
		cout << endl << e.what();
	}
	
}