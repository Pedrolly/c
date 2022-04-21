#include <iostream>
#include <list>
using namespace std;

struct no
{
	int peso; //peso da aresta
	int v;    //info de adjacência
	int temp;
};
void aresta(list<no>adj[], int x, int v, int z, int orientado)
{
	no aux;
	aux.v = v;
    aux.peso = z;
    
    adj[x].push_back(aux);
    if(orientado==0)
    {
        aux.v = x;
        adj[v].push_back(aux);
    }
}	
	int main()
	{
		list<no>adj[10];
		list<no>::iterator it; // lista de adjacências do grafo
		int Vertices; // número de vértices do grafo
		int u; // vértice de origem
		int v; // vértice de destino
		int p; // peso da aresta
		int orientado; // 0:não orientado   1:orientado
		int i = 0; //contador

		cin >> Vertices;
		cin >> orientado;

		//inserindo elemento na lista de adj
		cin >> u >> v >> p;

		while(u != -1 && v != -1 && p != -1)
		{
			aresta(adj, u, v, p, orientado);
			cin >> u >> v >> p;
		}

		// Mostrando o lista de adjacencias
		for(i = 0; i < Vertices; i++)
		{
			for(it = adj[i].begin(); it != adj[i].end(); it++)
				cout << i << " " << it->v << " " << it->peso << endl;
		}

		return 0;
	}
