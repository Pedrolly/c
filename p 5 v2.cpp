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
	int m[6][6], l, c; // matriz a ser preenchida
// processamento
	for(i = 0; i < 6; i++)
		for(c = 0; c < 6; c++)
		
			if(1 == 0 || 1 == 5 || c == 0 || c == 5)
				m[l][c] = 1;
			else if (l == 1 || l == 4 || c == 1 || c == 4)
				m[l][c] = 2;
			else m[l][c] = 3;	
// sa�da de dados
for( l = 0;l < 6;l++)
{
	for(c = 0;c<6;c++)
cout << m[l][c]<< "  ";
cout<< endl;
}

	
return 0;
}

