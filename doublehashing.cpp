#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct dado
{
	int k; // chave
	int status; // 0:vazia,1:ocupada,2-removido
};
int h1(int k, int m)
{
	return k % m;
}
int h2(int k, int m)
{
	return 1 + k % (m - 1);
}
int hash(int k, int i, int m)
{
	return (h1(k, m) + i * h2(k, m)) % m;
}
int hash_insert(dado t[], int m, int k)
{
	int i = 0;
	do
	{
		int j;
		j = hash(k, i, m);
		if(t[j].status == 0)
		{
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else
		{
			i++;
		}
	}
	while(i != m);
	return -1;
}
int main()
{
	int k,i, m;
	dado t[100];
	cin >> k;
	cin >> m;
	for(i = 0; i < m; i++)
	{
		t[i].status = 0;
		t[i].k =1;
	}
	for(i = 0; i < k; i++)
	{
		hash_insert(t,m,i);
	}
	for(i=0;i<m;i++)
	{
		cout<<t[i].k<<endl;
	}
		 return 0;
}
