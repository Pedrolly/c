#include <iostream>
#include <iomanip>
using namespace std;
int soma(int n, int total, int recursiva)
{
	recursiva = 0;
	for(int i = 0; i <= n; i++)
		if(n == 0)
		{
		 total	= 0;
			recursiva = recursiva + 1;
			return total;
		}
		else
		{
			recursiva = recursiva + 1;
			total = n * soma(n - 1,total,recursiva);;
			return total;
		}
	return recursiva;
}
int main()
{
	int n;
	int x;
	int y;
	cin >> n;
	soma(n,x,y);
	cout << "soma = " << x << endl;
	cout  << y << " chamadas recursivas" << endl;
	return 0;
}
