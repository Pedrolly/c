#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double retangulo(double lado1, double lado2, double lado3)
{
	double hipo, cat1, cat2, hiptrue, catstrue;
	bool trigreto;
	hipo = lado3;
	cat1 = lado2;
	cat2 = lado1;
	hiptrue = (hipo * hipo);
	catstrue = (cat1 * cat1) + (cat2 * cat2);
	if(hiptrue == catstrue)
		cout << "O triangulo é retângulo" << endl;
	else cout << "O triangulo não é retangulo" << endl;

}
double calculo(double lado1, double lado2, double lado3)
{
	if(lado3 > 0);
	{
		cout << lado3 << " Pode ser um lado de um triangulo" << endl;
		return lado3;
	}
    else
		cout << lado3 << "Não pode ser um lado de um triangulo" << endl;
	
	if(lado2 > 0);
	{
		cout << lado2 << " pode ser um lado de um triangulo" << endl;
		return lado2;
	}
	 else
		cout << lado2 << "não pode ser um lado de um triângulo" << endl;
	if(lado1 > 0);
	{
		cout << lado1 << " Pode ser um lado de um triangulo" << endl;
	return lado1;
	}
	else
		cout << lado1 << "não pode ser um lado de um triangulo" << endl;
}
int main()
{
	double lado1, lado2, lado3;

	do
	{
		cout << "entre com os lados do seu triângulo" << endl;
		cin >> lado1 >> lado2 >> lado3;
	}
	while(lado1 < 0 || lado2 < 0 || lado3 < 0);

		cout << calculo(lado1, lado2, lado3) << endl;
cout<<retangulo(lado1,lado2,lado3)<<endl;	

return 0;
}
