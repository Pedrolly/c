#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int somanat(int num)
{
	int i, soma;
	soma = 0;
	for(i = 1;i <= num;i++)
		soma = soma + i;
	return soma;
}
int main()
{
float n;
int snat;

do
{
	cout<<"Entre com um valor natural ( > 0)"<<endl;
	cin >>n;
}while(!(n > 0 && n == floor(n)));

snat = somanat(n);

cout<<"A soma de 1 até " << n << " é " << snat <<endl;	
	return 0;
}
