#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
// declara��es
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

// sa�da de dados
cout <<"maior :" << maior << "em " << lma << "," << cma << endl;
cout << "Menor :" << menor << "em " << lmen << "," << cmen << endl;
	return 0;
}

