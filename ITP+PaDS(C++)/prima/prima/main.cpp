#include <iostream>
using namespace std;

const int V = 5;
const int inf = 99999;


int minKey(int key[], bool mstSet[])
{
	int min = inf, MinIndex;

	for (int i = 0; i < V; i++)
		if (mstSet[i] == false && key[i] < min)
			min = key[i], MinIndex = i;

	return MinIndex;
}


template<typename T>
void print(int parent[], T graph)
{
	cout << "Edge \tWeight\n";
	for (int i = 1; i < V; i++)
		cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << " \n";
}


template<typename T>
void prima(T graph)
{
	int parent[V], key[V];

	bool mstSet[V];

	for (int i = 0; i < V; i++)
		key[i] = inf, mstSet[i] = false;

	key[0] = 0;
	parent[0] = -1;

	for (int i = 0; i < V - 1; i++)
	{
		int u = minKey(key, mstSet);

		mstSet[u] = true;

		for (int v = 0; v < V; v++)
			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
				parent[v] = u, key[v] = graph[u][v];
	}

	print(parent, graph);
}


int main()
{
	int graph[V][V]{
		  { 0, 9, 75, 0, 0},
		  { 9, 0, 95, 19, 42},
		  { 75, 95, 0, 51, 66},
		  { 0, 19, 51, 0, 31},
		  { 0, 42, 66, 31, 0} };

	int tab[V][V]{ {0,2,inf,inf,1},{2,0,1,4,8},{inf,1,0,2,inf},{inf,4,2,0,10},{1,8,inf,10,0} };


	prima(graph);

	return 0;
}
