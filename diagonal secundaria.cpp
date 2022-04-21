#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>     // inclui funções de configuração de saída
#include <cmath>



using namespace std; // para usar bibliotecas



int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
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
