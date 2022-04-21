#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float altura, menor, sam;
	int sexo, nh, nm;

	cout << "entre com a altura(0 para sair) " << endl;
	cin >> altura;

	nh = 0;
	nm = 0;
	sam = 0;
	menor = altura;
	while(altura > 0)
	{
		cout << "entre com a informação de sexo(1- masc 2-fem) " << endl;
		cin >> sexo;
		if(sexo == 1)
			nh = nh + 1;
		else
		{
			nm = nm + 1;
			sam = sam + altura;
		}
		if(altura < menor)
			menor = altura;

		cout << "entre com a altura(0 para sair)" << endl;
		cin >> altura;
	}
	cout << "numero de homens " << nh << endl;
	cout << "Menor altura " << menor << endl;
	if(nm > 0)
		cout << "media das alturas das mulheres " << sam / nm << endl;
	else cout << "sem mulheres " << endl;
	return 0;
}
