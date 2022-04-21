#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>     // inclui funções de configuração de saída




using namespace std; // para usar bibliotecas



int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
// declarações
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





// saída de dados




	return 0;
}