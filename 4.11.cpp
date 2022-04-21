#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float x, y, cont;
	cout << "entre com x" << endl;
	cin >> x;
	y = 0;
	cont = 0;
	while(cont < 2000)
	{
		cont = cont + x;
		y = y + (cont * x);
	}
	cout << "o somatorio e " << y << endl;











	return 0;
}
