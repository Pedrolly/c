#include <iostream>
#include <list>
using namespace std;
struct no
{
	int peso; //peso da aresta
	int v;    //info de adjacência
	int temp;
};
void ordenacao_topologica(int f[], int nVertices)
{
	int x, i, xu; //variáveis auxiliares
	int vetor[100];//vetor auxiliar
	for(i = 0; i < nVertices; i++)
		vetor[i] = i;
	for(x = 0; x < nVertices; x++)
		for(i = x + 1; i < nVertices; i++)
			if(f[vetor[x]] < f[vetor[i]])
			{
				xu = vetor[x];
				vetor[x] = vetor[i];
				vetor[i] = xu;
			}
//saída dos dados
	for(x = 0; x < nVertices; x++)
		cout << vetor[x] << " ";
		cout << endl;

}
void DFS_VISIT(list<no> adj[], int nVertices, char color[], int pi[], int f[], int d[], int u, int &time)
{
	list<no>::iterator v;//varre a lista de adjacência
	color[u] = 'g';
	d[u] = time++;
	for(v = adj[u].begin(); v != adj[u].end(); v++) //varrendo lista de adjacência
	{
		if(color[v->v] == 'w')
		{
			pi[v->v] = u;
			DFS_VISIT(adj, nVertices, color, pi, f, d, v->v, time);
		}
	}
	color[u] = 'b';
	f[u] = time + 1;
}
void DFS(list<no>adj[], int nVertices)
{

	char color[100];//w-branco,g-cinza,b-preto;
	int pi[100];//pais dos vertices
	int time;//tempo
	int f[100];//momento que vertice é finalizado
	int d[100];//momento da descoberta dos vertices
	int o;//contador
	for(int o = 0; o < nVertices; o++)
	{
		color[o] = 'w';
		pi[o] = -1;
	}
	time = 0;
	for(o = 0; o < nVertices; o++)
		if(color[o] = 'w')
			DFS_VISIT(adj, nVertices, color, pi, f, d, o, time);

ordenacao_topologica(f,nVertices);
}
//0-não orientado, 1-orientado
void aresta(list<no>adj[], int u, int v, int orientado)
{
	no aux;
	aux.v = v;

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
	int orientado; // 0:não orientado   1:orientado
	cin >> nVertices;
	list<no>adj[nVertices];//lista de adjacência
	list<no>::iterator it;//iterator do grafo
	cin >> orientado;
	cin >> u >> v;
	while(u != -1 && v != -1)
	{
		aresta(adj, u, v, orientado);
		cin >> u >> v;
	}
//chamando dfs
	DFS(adj, nVertices);
	return 0;
}
