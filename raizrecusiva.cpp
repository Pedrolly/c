#include <iostream>
#include <cmath>
using namespace std;
int raiz(float x, float x0, float e)
{
	if(abs(pow(x0, 2) - x) <= e)
		return x0;
else raiz(x,(pow(x0,2)+x)/2*x0,e);
}
int main()
{
	float x, x0, e;
	float z;
	cin >> x;
	cin >> x0;
	cin >> e;
z=raiz(x,x0,e);
cout<<z<<endl;	
	return 0;
}
