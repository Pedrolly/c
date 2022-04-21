#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct dado
{
	int k; // chave
	int status; // 0:vazia, 1:ocupada , 2-removido
};
int h1(int k, int m)
{
float h1;	
	h1 = k % m;
	return h1;
}
int h2(int i,int k, int m)
{
float h2;	
	h2 = 1 + (k % (m - 1));
	return h2;
}
int hash(int k, int m, int i)
{
	int h;
for(i=0;i<=10;i++)	
		h =(h1(k,m) + i*h2(i,k,m)) % m;
	return h;
}
int main()
{
	int k,i,m;
	cin >> k;
	cin >> m;
	i=0;
	
	int hax;
	hax = hash(k,m,i);
	cout << hax << endl;
	return 0;
}
