#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int cont = 0;
	int x, y, f, g, n;
	cout << "entre com o valor de n" << endl;
	cin >> n;
	while(cont <= n)
	{
		cout << "entre com o valor de x";
		cin >> x;
		g = (9 - (pow(x, 3)));
		if(g > 0)
		{
			g == f;
			y = f * sqrt(x);
			cout << "o resultado e" <<y << endl;
		}
		else if(g <= 0)
		{
			f = 1 - x;
			y = f * sqrt(x);
			cout << "o resultado e:" << y << endl;
		}
		cont ++;
	}
	return 0;
}
