#include <iostream>
#include <cmath>
using namespace std;
struct dado
{
	string veto[100];
} reprovou;

float reprovar(string x[100], int y)
{
int somrep=0;	
	for(int o = 0; o <= y; o++)
	{
		if(x[o] == 'E' || x[o] == 'D')
		{
        somrep=somrep + 1;
		return somrep;
		}
	}
return somrep;
}
int main()
{
	int n;
	string a;
	reprovou*veto[100] = new dado;
	cin >> n;
	for(int i = 0; i <= n; i++)
	{
		cin >> a;
		a* = dado.veto[i];
	}
	reprovar(dado*veto[100], n);
cout<< reprovar(x,y)<<" em risco de reprovacao"<<endl;	
	return 0;
}
