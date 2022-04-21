#include <iostream>
#include <list>
#include <climits>

using namespace std;

struct no
{
	int peso; //peso da aresta
	int v;    //info de adjac�ncia
	int temp;
};

void prim(list<no>adj[], int nVertices, int start)
{
	bool intree[100];// verifica quais v�rtices j� est�o na �rvore
	int parent[100]; // peso m�nimo de qualquer aresta que conecta v a um v�rtice na �rvore
	int weight;//peso da aresta
	int u, v; // vars aux para varrer o grafo
	int distance[100];
	list<no>::iterator z;//iterator para varrer a lista
	list<no>::iterator it;//iterator it para varrer a lista
	int dist;//variavel aux. para encontrar a aresta de menor peso
	int destino;
	int custo = 0;
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
		for(z = adj[v].begin(); z != adj[v].end(); z++)
		{
			destino = z->v;
			weight = z->peso;
			if(distance[destino] > weight && intree[destino] == false)
			{
				distance[destino] = weight;
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
	cout << "Arvore Geradora Minima: " << endl;

	for(u = 0; u < nVertices; u++)
	{
		dist = distance[u];
		custo = custo + dist;
	}

	for(u = 1; u < nVertices; u++)
	{
		cout << parent[u] << " " << u << endl;
	}
	cout << "Custo: " << custo << endl;
}
//0-n�o orientado, 1-orientado
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
	int nVertices; // n�mero de v�rtices do grafo
	int u; // v�rtice de origem
	int v; // v�rtice de destino
	int p; // peso da aresta
	int start;//vertice de in�cio
	int orientado; // 0:n�o orientado   1:orientado
	cin >> nVertices;
	list<no>adj[nVertices];//lista de adjac�ncia
	list<no>::iterator it;//iterator do grafo
	cin >> orientado;
	cin >> start;
	cin >> u >> v >> p;

	while(u != -1 && v != -1 && p != -1)
	{
		aresta(adj, u, v, p, orientado);
		cin >> u >> v >> p;
	}
	prim(adj, nVertices, start); //declara��o da fun��o prim na main
	return 0;
}
