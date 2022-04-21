#include <iostream>
#include <iomanip>

using namespace std;
struct dado
{
	int k; // chave
	int status; // 0:vazia, 1:ocupada, 2-removido
};
// Função auxiliar para inserir a chave key em uma tabela hash de tamanho m
int hash_aux(int k, int m)
{
	int pos = k % m; // posição a inserir

	// Se a posição for negativa, temos que somar m
	if(pos < 0)
		pos += m;

	return pos;
}
// Função que implementa a sondagem linear
int hash(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
}
int main()
{
	int m; // tamanho da tabela
	int i; // contador
	dado t[100]; // tabela hash
	int k; // chaves
	cin>>k;
	cin >> m;
for(i=0;i<m;i++)	
	cout<<hash(k,i,m)<<endl;

	
	return 0;
}
