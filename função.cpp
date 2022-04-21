#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int iscalcexp(int num, int exp)
{
	int x,j;
	num = x;
	for(j = 1; j <= exp; j++)
		x = x * num;
	return x;
}
int fatorial(int num)
{
	int j, fato;
	for(j = 0; j <= num; j++)
		fato = num * j;
}
void isprimo(int num)
{
	int pri, k, soma;
	soma = 0;
	for(k = 1; k <= num; k++)
		pri = num % k;
	soma = soma + pri;
	if(pri == 0)
	{
		cout << "Primo!" << endl;
	}
}
int main()
{
	char opc;
	int exp, num;
	cout << "Entre com o codigo" << endl;
	cin >> opc;
	switch(opc)
	{
	case 'A':
		cout << "Entre com o numero" << endl;
		cin >> num;
		cout << "Entre com o expoente" << endl;
		cin >> exp;
		iscalcexp(x);
		break;
	case 'B':
		cout << "Entre com o numero" << endl;
		cin >> num;
	fatorial();	
		break;
	case 'C':
		cout << "Entre com o numero" << endl;
		cin >> num;
	}
	return 0;
}
