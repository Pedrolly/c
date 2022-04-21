#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;
int main()
{
	float prectot, agua;
	int i, j, k, maiorcom, num[j];
	char comtipo,maiortip;
	maiorcom = 0;
	cout << "Entre com a quantidade de comsumidores" << endl;;
	cin >> j;
	for(i = 0; i < j; i++)
	{
		do
		{
			cout << "Entre com o numero do comsumidor" << endl;
			cin>>num[j];
			cout << "Entre com a quantidade de agua gasta do comsumidor(em litros) " << num[j] << endl;
			cin >> agua;
			prectot = 0.72 * agua;
           cout<<"Entre com o tipo de comsumidor"<<endl;
           cin.get(comtipo);
		cout<<"o omsumidor precisara pagar "<< prectot<< " R$"<< endl;
		}while(j < 0);
	if(prectot >= maiorcom);
	{
		maiorcom = prectot;
	maiortip = comtipo;
	}
	}

}
