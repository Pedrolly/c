#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>     // inclui fun��es de configura��o de sa�da




using namespace std; // para usar bibliotecas



int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
// declara��es
	int n, l, k, i;
	float soma = 0;
// processamento
	cin >> n;
	float mat[n][n];
	for(l = 0; l < n; l++)
	{
		for(k = 0; k < n; k++)
		{
			cin >> mat[l][k];
		}

	}

	for( i = 0; i < n; i++)
		soma = soma + mat[i][i];

	cout << fixed << setprecision(2);
	cout << soma << endl;





// sa�da de dados




	return 0;
}