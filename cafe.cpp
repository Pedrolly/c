#include<iostream>
using namespace std;
int main()
{
	int A1 , A2 , A3;
	int t1, t2, t3;
	cin >> A1 >> A2 >> A3;
	t1 = (A2 * 2 + A3 * 4);
	t2 = (A1 * 2 + A3 * 2);
	t3 = (A1 * 4 + A2 * 2);

	if(t1 <= t2 && t1 <= t3)
		cout << t1 << endl;

	else if(t2 <= t1 && t2 <= t3)
	{
		cout << t2 << endl;
	}

	else if(t3 <= t1 && t3 <= t2)
	{
		cout << t3 << endl;
	}
	return 0;
}
