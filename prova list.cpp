#include <iostream>
#include <list>
using namespace std;
int main()
{
	int x;
	int n;
	int y;
	list<int>progs;
	list<int>lista;
	int auxlista;
	int auxlista2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		progs.push_back(x);
		lista.push_front(x);
	}

	for(int y = 0; y <= n; y++)
	{
			auxlista = *progs.begin();
		cout << " " << auxlista;
		progs.pop_front();
	}
	for(int z = 0; z <= n; z++)
	{
		auxlista2 = *lista.end();
		cout << " " << auxlista2;
		lista.pop_back();
	}
	return 0;
}


