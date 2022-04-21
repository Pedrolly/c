#include <iostream>
using namespace std;
float comb(int n, int k)
{
int z;
	if(k == n)
	{
		return 1;
	}
	if(k == 1)
	{
		return n;
	}
	if(k != 1 && k != n)
	{
		comb(n - 1,k - 1) + comb(n - 1, k);
		return z;
	}
}
int main()
{
	int n;
	int k;
	int x;
	cin >> n;
	cin >> k;
	x = comb(n, k);
	cout << x << endl;
	return 0;
}
