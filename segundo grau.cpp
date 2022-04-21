#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
void calc_raizes(float a, float b, float c, float &x1, float &x2, float delta)
{

	delta = (b * b) - 4 * a * c;
	if(delta >= 0)
	{
		x1 = (-b) + sqrt(delta) / (2 * a);
		x2 = (-b) - sqrt(delta) / (2 * a);
	}

}



int main()
{
	float a, b, c, x1, x2;
	float delta;
	cout << "Entre com o primeiro numero" << endl;
	cin >> a;
	cout << "Enttre com o segundo numero" << endl;
	cin >> b;
	cout << "Entre com o terceiro numero" << endl;
	cin >> c;

	calc_raizes(a, b, c, x1, x2, delta);
	if(delta < 0)
	{
		cout << "Nao ha raizes" << endl;
	}
	else if(x1 > x2)
	{
		cout << "x2= " << x2 << endl;
		cout << "x1= " << x1 << endl;
	}
	else 
	{
		cout << "x1= " << x1 << endl;
		cout << "x2= " << x2 << endl;
	}
	return 0;
}
