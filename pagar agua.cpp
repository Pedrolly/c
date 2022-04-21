#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;
int main()
{
	float prectot, agua, maiorcom,percent,perctot,soma,porcent;
	int  maiornum,num;
	char comtipo, maiortip;
	maiorcom = 0;
	percent = 0;
	soma = 0;
	cout << "Entre com o numero do comsumidor( negativo para sair)" << endl;
	cin >> num;
	while(num > 0)
	{
		cout << "Entre com o tipo de comsumidor(R para residencial e C para comercial)" << endl;
		cin>>comtipo;
		cout << "Entre com a quantidade de agua gasta do comsumidor(em litros) " << num << endl;
		cin >> agua;
		prectot = 0.72 * agua;
		soma = soma + agua;
		percent = percent + prectot;
     cout<<"A quantidade que o consumidor "<<num <<"deve pagar e de"<< prectot <<" R$"<<endl;	
if(prectot >= maiorcom);
	{
		maiorcom = prectot;
		maiortip = comtipo;
		maiornum = num;
	}
	cout << "Entre com o numero do comsumidor" << endl;
		cin >> num;
	}


porcent = (percent*100.00)/agua;
cout<<"O comsumidor que mais deve é o "<< maiornum << " Ele é do tipo "<< maiortip <<endl;	
cout<<"O percentual será de"<< porcent <<" % "<<endl;





		 return 0;
}



