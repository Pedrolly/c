#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int hash_aux(int k, int m)
{
	int h;
	int x;
	h = k % m;
	if(h < 0)
	{
		x = h + m;
		return x;
	}
	return h;
}
int main()
{
	int k;
	int m;
	do
	{
		cin >> k;
		cin >> m;
		cout << hash_aux(k, m)<<endl;
	}while(m != 0 && k != 0);
	
	return 0;
}
