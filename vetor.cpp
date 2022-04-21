#include <iostream>
using namespace std;
int main()
{
	int n, q;
	cin >> n >> q;
	int v[n], soma[n];
	int s = 0;
	for(int  i = 0; i < n; i++)
	{
		cin >> v[i];
		s += v[i];
		soma[i] = s;

	}
	for(int i = 0; i < 0; i++)
	{
		int a, b;
		cin >> a >> b;
		if(a == 0)
			cout << soma[b] << endl;
		else
		{
			cout << soma[b] - soma[a - 1] << endl;
		}
	}

	return 0;
}





