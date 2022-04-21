#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<float>lista;//lista dos produtos em estoque
	list<int> pilha;//pilha dos produtos a venda
	float x;//
	float n;
	int i;
	float auxlista, auxpilha;
	int N;
	cin >> N;
	for( i = 0; i < N; i++)
	{
		cin >> n;
		if(n == 1)
		{
			cin >> x;//leitura do codigo
			lista.push_back(x);
		}

		if(n == 2)
		{
			pilha.push_front(*lista.begin());
			lista.pop_front();//colocando o produto a venda
		}

	}

	cout << "Estoque: ";
	while(!lista.empty())//varrendo a lista
	{
		auxlista = *lista.begin();
		cout << "gears " << auxlista;
		lista.pop_back();
		cout << endl;

		cout << "Venda: ";
		while(!pilha.empty())
		{
			auxpilha = *pilha.begin();
			cout << " " << auxpilha;
			pilha.pop_front();
		}
	}
	return 0;
}
