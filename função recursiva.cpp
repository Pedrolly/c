#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float potencia(float a, float n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return a * potencia(a, n - 1);
	}

}
int main()
{
	float a, n, y;

	cin >> a;
	
	cin >> n;
	y = potencia(a,n);
	cout << y << endl;
	return 0;
}
