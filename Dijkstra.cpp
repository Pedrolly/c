#include <iostream>
#include <list>
#include <climits>

using namespace std;

struct no
{
	int peso; //peso da aresta
	int v;    //info de adjacência
	int temp;
};
void dijkstra(list<no>adj[], int nVertices, int start, int end)
{
	bool intree[100];//vetor com os valores de intree
	int parent[100];//vetor com os parents
	int weight;//peso da aresta
	int u, v;//var auxiliares
	int z;//var auxiliar para a pilha
	list<no>::iterator x;//iterator
	list<no>::iterator it;
	list<int> pilha;//pilha com os menores custos
	int c;
	int dist;
	int destino;
	int distance[100];
	for(u = 0; u < nVertices; u++)
	{
		intree[u] = false;
		distance[u] = INT_MAX;
		parent[u] = -1;
	}
	distance[start] = 0;
	v = start;
	while(intree[v] == false)
	{
		intree[v] = true;
		for(x = adj[v].begin(); x != adj[v].end(); x++)
		{
			destino = x->v;
			weight = x->peso;
			if(distance[destino] > distance[v] + weight)
			{
				distance[destino] = distance[v] + weight;
				parent[destino] = v;
			}
		}
		v = 0;
		dist = INT_MAX;
		for(u = 0; u < nVertices; u++)
		{
			if(intree[u] == false && dist > distance[u])
			{
				dist = distance[u];
				v = u;
			}
		}
	}
	c = end;
	pilha.push_back(c);
	while(c != start)
	{
		c = parent[c];
		pilha.push_front(c);
	}
cout << "Menor caminho";
	while(!pilha.empty())
	{
		z = *pilha.begin();
		pilha.pop_front();
		cout << " " << z;
	}
	cout << " Custo: " << distance[end] << endl;
}
//0-não orientado, 1-orientado
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
	int nVertices; // número de vértices do grafo
	int u; // vértice de origem
	int v; // vértice de destino
	int p; // peso da aresta
	int start;//vertice de início
	int end;
	int orientado; // 0:não orientado   1:orientado
	cin >> nVertices;
	list<no>adj[nVertices];//lista de adjacência
	list<no>::iterator it;//iterator do grafo
	cin >> orientado;
	cin >> start;
	cin >> end;
	cin >> u >> v >> p;
	while(u != -1 && v != -1 && p != -1)
	{
		aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
	dijkstra(adj, nVertices, start, end);
	return 0;
}
