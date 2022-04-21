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
	int m[6][6], l, c; // matriz a ser preenchida
// processamento
	for(i = 0; i < 6; i++)
		for(c = 0; c < 6; c++)
		
			if(1 == 0 || 1 == 5 || c == 0 || c == 5)
				m[l][c] = 1;
			else if (l == 1 || l == 4 || c == 1 || c == 4)
				m[l][c] = 2;
			else m[l][c] = 3;	
// saída de dados
for( l = 0;l < 6;l++)
{
	for(c = 0;c<6;c++)
cout << m[l][c]<< "  ";
cout<< endl;
}

	
return 0;
}

