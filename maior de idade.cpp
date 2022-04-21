#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>

using namespace std;

int parcial(char sx, int idade)
{
	int quant;
	if(sx = 'm' && idade >= 18)
		quant = 1;
else quant = 0;
	 return quant;
}
int main()
{
	char sexo;
	int ida, i, qparcial;

	qparcial = 0;

	for( i = 0; i < 5; i++)
	{

		do
		{
			cout << "Entre com a informação de sexo( M para masculino, F para feminino)" << endl;
			cin >> sexo;
		}
		while(sexo != 'M' && sexo != 'F');

		do
		{
			cout << "Entre com a idade ( idade > 0)" << endl;
			cin >> ida;
		}
		while(!(ida > 0));
     qparcial = qparcial + parcial(sexo,ida);
	}

	

cout<<"porcentagen de homens com maior idade"<< (qparcial*100.0)/5<<"%"<<endl;
	
	return 0;
}


