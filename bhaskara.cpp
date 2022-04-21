#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	double a, b, c, delta, r1, r2;
	cin >> a;
	cin >> b;
	cin >> c;

	delta = pow(b,2) - 4.0 * a * c;
	if(delta <= 0)
	{
		cout << "<< Impossivel calcular" << endl;
	}
	if(delta > 0)
	{
		r1 = ((-b) + sqrt(delta)) / 2.0 * a;
		r2 = ((-b) - sqrt(delta)) / 2.0 * a;
		cout << "<< R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl;
	}




	return 0;
}
