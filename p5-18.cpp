#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
// declarações
	float mat[6][3], maior, menor;
	int l, c, lma, lmen, cma, cmen;
	for(l = 0; l < 6; l++)
	{
		for( c = 0; c < 6; c++)
		{
		cout << "Elemento " << l << "," << c << ":";
		
			cin >> mat[l][c];	
		}
			
	}
// processamento
	maior = mat[3][2];
	lma = 3;
	cma = 2;
	menor = mat[4][1];
	lmen = 4;
	cmen = 1;

	for (l = 0; l < 6; l++)
	{
		for(c = 0; c < 3; c++)
		{
			maior = mat[l][c];
			lma = l;
			cma = c;
		}
		if(mat[l][c] < menor )
		{
        menor = mat[l][c];
        lmen = l;
        cmen = c;
		}
	}

// saída de dados
cout <<"maior :" << maior << "em " << lma << "," << cma << endl;
cout << "Menor :" << menor << "em " << lmen << "," << cmen << endl;
	return 0;
}

