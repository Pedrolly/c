#include <iostream>
#include <list>
using namespace std;
int soma(list<int> lista)
{
	int i;
	int soma = 0;
	list<int>::iterator it;
	for(it = lista.begin(); it != lista.end(); it++)
	{
		soma = soma + *it;
	}
	return soma;
}

int main()
{
//declaração
	list<int>lista;
	int x;
	cin >> x;
	do
	{
		lista.push_back(x);
		cin >> x;
	}
	while(x != 0);
	cout << soma(lista) << endl;;
	while(!lista.empty())
		lista.pop_front();
	return 0;
}
