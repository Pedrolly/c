#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	double num, num2, num3, raiznum, cubnum, num4, delta, x1, x2;
	int cod;

	cout << "Entre com o codigo(1-diferença de modulo,2-potencia cubica da raiz quadrada,3-bhaskara)" << endl;
	cin >> cod;
	switch(cod)
	{
	case 1:
		cout << "Entre com os dois numeros para diferença de modulos" << endl;
		cin >> num;
		cin >> num2;
		num3 = num - num2;
		num4 = num3 * (-1);
		cout << fixed << setprecision(4);
		cout << num4 << endl;
		break;
	case 2:
		cout << "Entre com o numero" << endl;
		cin >> num;
		if(num <= 0)
		{
			cout << " Impossivel calcular" << endl;
		}
		raiznum = sqrt(num);
		cubnum = raiznum * raiznum * raiznum;
		cout << fixed << setprecision(4);
		cout << cubnum << endl;
		break;
	case 3:
		cout << "Entre com o numero A,o numero B, e o numero C" << endl;
		cin >> num;
		cin >> num2;
		cin >> num3;
		delta = (num * num) - (4 * num3 * num2);
		if(delta > 0 || num > 0)
		{
			x1 = (-num2) + sqrt(delta) /(num * 2);
			x2 = (-num2) - sqrt(delta) /(num * 2);
			cout << fixed << setprecision(4);
			cout << "R1 = " << x1 << endl;
			cout << fixed << setprecision(4);
			cout << "R2 = " << x2 << endl;
		}
		else
		{
			cout << "Impossivel calcular" << endl;
		}
	}

	return 0;
}


