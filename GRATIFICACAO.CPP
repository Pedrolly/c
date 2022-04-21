#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<math.h>

using namespace std;

int main()
{
	float h, hex , hf;

	string nome;



	cout << "entre com o seu nome" << endl;

	getline(cin, nome);

	cout << "entre com o numeros de horas extras" << endl;

	cin >> hex;

	cout << "entre com o numero de horas-faltas" << endl;

	cin >> hf;

	h = (hex - 2.0/3 * hf);

	if(h <= 0)cout << "sorry sem gratificaçao" << endl;

	else
	{
		 if(h > 2400)
			cout << nome << " sua gratificacao sera de 500" << endl;

		else if(h > 1800)
			cout << nome << " sua gratificacao sera de 400" << endl;

		else if(h > 1200)
			cout << nome << " sua gratificacao sera de 300" << endl;
		else if(h >= 600)
			cout << nome << " sua gratificacao sera de 200" << endl;
		else if(h >0 )
			cout << nome << " sua gratificacao sera de 100" << endl;
		else if(h <= 0)
			cout <<nome <<" sorry,sem gratificacao" <<endl;
	}

		return 0;
	}

