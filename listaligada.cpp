#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> lista;
	list<int> lista2;
	list<int> pilha;
	int x, y;
	int numenor = 9999999;
	int numaior = 0;
	float auxpilha;
	cin >> x;
	do
	{
		cin >> x;
		lista.push_back(x);
		if(x < numenor)
		{
			numenor = x;
			pilha.push_front(x);
		}
		if(x > numaior)
		{
			numaior = x;
			pilha.push_back(x);
		}
	}
	while(x != 0);
	do
	{
		cin >> y;
		lista2.push_back(y);
		if(y < numenor)
		{
			numenor = y;
			pilha.push_front(y);
		}
		if(y > numaior)
		{
			numaior = y;
			pilha.push_back(y);
		}
	}
	while(y != 0);

	while(!pilha.empty())
	{
        pilha.pop_front();
	auxpilha=*pilha.begin();	
		cout <<" "<<auxpilha;
	}

		 return 0;
}
