#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>     // inclui fun��es de configura��o de sa�da
#include <cmath>



using namespace std; // para usar bibliotecas



int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
	int n, l, k, i, j;
	float soma = 0;

	
	cin >> n;
	float mat[n][n];
	for(l = 0; l < n; l++)
	{
		for(i = 0; i < n; i++)
		{
			cin >> mat[l][i];
		}

	}
	j = n - 1;
	for(k = 0; k < n; k++)
	{
		soma = soma + mat[k][j];
	   j--;
	}

	cout << fixed << setprecision(2);
	cout << soma << endl;
	return 0;
}
