#include <iostream>
#include <cmath>
using namespace std;
float potencia(float n, float a)
{
	if(n == 0)
	return 1;
	else if(n > 0)
	return (a *potencia(n-1,a));
}
int main()
{
	float a, n, m;
	cin >> a;
	cin >> n;
	m = potencia(n, a);
	cout << m << endl;
	return 0;
}
