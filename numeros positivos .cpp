#include <iostream>  // padrão de entrada e saída no C++
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída

using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
	// declarações
	int num, denomi;
	float numpos, med;
	numpos = 0;
	med = 0;
	// entrada de dados
	cin >> num;
// processamento
	while(num >= 0)
	{
		cin >> numpos;
		numpos = numpos + numpos;
		denomi = denomi + 1;
	}
// saída de dados
	med = (numpos / denomi);
	if(num < 0)
	{
		 cout << med << endl;
	}
	
 return 0;
}
