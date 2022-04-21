#include <iomanip>
#include <iostream>
#include <list>
using namespace std;

struct no
{
	int peso; //peso da aresta
	int v;    //info de adjacência
	int temp;
};
void bfs(list<no>adj[], int nVertices, int s)
{
	int u,v; // var aux para identificar os vértices
	int state[10]; // undiscovered=-1, discovered=0, processed=1
	int p[10]; // armazena os pais
	list<int> Q; // fila aux para o algoritmo
	list<no>::iterator it; // ponteiro para andar na lista de adj
	for(int i = 0; i < nVertices; i++)
		if(i != s)
		{
			state[i] = -1;
			p[i] = -1;
		}
	state[s] = 0;
	p[s] = -1;
	Q.push_back(s);
	while(!Q.empty())
	{
		u = Q.front();
		Q.pop_front();
		cout<< u<<endl;
		for(it = adj[u].begin(); it != adj[u].end(); it++)
		{
			v = it->v;
			cout << u << " " << v << endl;
			if(state[v] == -1)
			{
				state[v] = 0; //descoberto
				p[v] = u;
				Q.push_back(v);
			}
		}
		state[u] = 1; //processado
	}
}
void aresta(list<no>adj[], int u, int v, int p, int orientado)
{
	no aux;
	aux.v = v;
	aux.peso = p;

	adj[u].push_back(aux);
	if(orientado == 0)
	{
		aux.v = u;
		adj[v].push_back(aux);
	}
}
int main()
{
	list<no>adj[10];
	list<no>::iterator it;
	int Vertices;
	int u;
	int p;
	int orientado;
	int v;
	cin >> Vertices;
	cin >> orientado;

	cin >> u >> v >> p;

	while(u != -1 && v != -1 && p != -1)
	{
		aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
bfs(adj, Vertices, orientado);
	return 0;
}
