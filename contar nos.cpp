#include <iostream>
#include <list>
using namespace std;
int contar(list<int> lista)
{
	int i;
	int soma =0;
	list<int>::iterator it;
	for(it = lista.begin(); it != lista.end(); it++)
	{
	soma++;
	}
return soma;
}
int main()
{
	list<int>lista;
	int x;
	cin >> x;
	do
	{
		lista.push_back(x);
		cin >> x;
	}
	while(x != 0);
cout<<contar(lista)<<endl;
	while(!lista.empty())
		lista.pop_front();
	return 0;
}
