#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int cont, i, n;
	bool palindromo;
	cin >> n;
	char vetor[n];
	palindromo = false;
	for( i = 0; i < n; i++)
	{
		cin >> vetor[i];
		if(vetor[i] == vetor[n - 1 - i])
			palindromo = true;
		else
		{
			palindromo = false;
		}



	}
	if(palindromo)
		cout << "Palindromo!" << endl;
	else cout << "Nao! " << endl;


	return 0;




}
