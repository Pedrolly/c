#include <iostream>
using namespace std;

bool isTrianguloValido(double lado1, double lado2, double lado3)
{
    if ((lado1+lado2 > lado3) && (lado2+lado3 > lado1) && (lado1+lado3 > lado2))
        return true;
    else
        return false;
    
}

void isRetangulo(double lado1, double lado2, double lado3)
{
    double hipotenusa,cateto1,cateto2;
    if ((lado1 > lado2) && (lado1 > lado3))
    {
        hipotenusa = lado1;
        cateto1 = lado2;
        cateto2 = lado3;
    } else if (lado2>lado3) 
        {
            hipotenusa = lado2;
            cateto1 = lado1;
            cateto2 = lado3;
        } else 
        {
            hipotenusa = lado3;
            cateto1 = lado1;
            cateto2 = lado2;
        }
        cout << "O maior lado � " << hipotenusa << "\n";
        if (hipotenusa*hipotenusa==(cateto1*cateto1)+(cateto2*cateto2)) {
            cout << "O tri�ngulo � ret�ngulo.\n";
        } else
        {
            cout << "O tri�ngulo n�o � ret�ngulo.\n";
        }
}

int main()
{
    double lado1, lado2, lado3;
    do
 	{
		cout << "entre com os lados do seu tri�ngulo.\n" << endl;
		cin >> lado1 >> lado2 >> lado3;
	}
	while(lado1 < 0 || lado2 < 0 || lado3 < 0);   
	
    if (isTrianguloValido(lado1,lado2,lado3)) {
        cout << "Os n�meros fornecidos podem formar um tri�ngulo.\n";
        isRetangulo(lado1,lado2,lado3);
    } else
    {
        cout << "Os n�meros fornecidos n�o podem formar um tri�ngulo.\n";
    }
    return 0;
}