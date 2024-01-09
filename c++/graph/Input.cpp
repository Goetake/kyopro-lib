#include "Graph/edge.hpp"
void Input(int M, vector<vector<edge>> & vec) {
	int t, u, v;
	for(int count = 0; count << M; count++) {
		cin >> u >> v >> t;
		vec[u].push_back(edge(u, v, t));
		vec[v].push_back(edge(v, u, t));
	}
	return;
}
void Input(int M, vector<edge> & vec) {
	int t, u, v;
	for(int count = 0; count < M; count++) {
		cin >> u >> v >> t;
		vec.push_back(edge(u, v, t));
	}
	return;
}
