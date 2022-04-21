#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float ideal(float &h, char &sexo)
{
float pesid;
	switch(sexo)
	{
	case 'F':
    pesid = (62.1 * h)- 44.7;
		break;
	case 'M':
pesid = (72.7*h)-58.0;
		break;
	}
return pesid;
}
int main()
{
	char sexo;
	float h,pesoid;

	cout << "Entre com a altura" << endl;
	cin >> h;
	cout << "Entre com o sexo(M para masculino, F para o feminino)" << endl;
	cin >> sexo;
pesoid=ideal(h,sexo);
cout<<"Peso ideal = "<<pesoid<<endl;
	return 0;
}
