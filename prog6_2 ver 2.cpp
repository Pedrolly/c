#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void parcial(char sx,int idade,int &nh)
{
	if(sx == 'm' && idade >= 18)
		nh = nh + 1;
return;
}

int main()
{
	char sexo;
	int idade,i,qp;
	qp = 0;

	for( i =0;i<=5;i++)
	{
		do
		{
			cout<<"Entre com a informação de sexo(M ou F)"<<endl;
			cin>>sexo;
		}while(sexo != 'F' && sexo != 'M');
		do
		{
			cout<<"Entre com a idade ( >0)"<<endl;
		cin>>idade;
		}while(!(idade > 0));
		//processamento
    parcial(sexo,idade,qp);//chamada da função sem retorno
	}

cout<<"Porcentagem"<<(qp*100.00)/5<<" % "<<endl;
	return 0;
}