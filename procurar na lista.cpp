#include <iostream>
#include <list>
using namespace std;
bool encontrar(list<float> lista, float x)
{
	int i;
	list<float>::iterator it;
	for(it = lista.begin(); it != lista.end(); it++)
	{
		if(*it == x)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	list<float> lista;
	float x;
	float procu;
	cin >> x;
	do
	{
		lista.push_back(x);
		cin >> x;
	}while(x != 0);
	cin >> procu;
	if(encontrar(lista, procu) == false)
	{
		cout << "Nao encontrado" << endl;
	}
	else
	{
		cout << "encontrado" << endl;
	}
	// Liberando a memória utilizada pela lista
	while(!lista.empty())
		lista.pop_front();
	return 0;
}
