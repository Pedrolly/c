#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double raiz(double x, double x0, double e)
{
	if(fabs(pow(x0, 2) - x) <= e)
	{
		return x0;
	}
	else
	{
		return raiz(x,((pow(x0, 2) + x) / (2 * x0)), e);
	}

}

int main()
{
	double x, x0, e;
double y;
	cin >> x;
	cin >> x0;
	cin >> e;
y = raiz(x,x0,e);
cout<<fixed<<setprecision(4);
cout<< y <<endl;	
	return 0;
}
