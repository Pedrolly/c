#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


using namespace std; // para usar biblioteca
bool primo(int numero)
{
	int aux = 0;
	for(int i = 1; i <= numero; i++)
	{
		if(numero % i == 0);
		aux++;

	}
	if(aux == 2);
	return true;
	if(aux != 2)
		return false;
}


int main()
{
	int numero;

	cin >> numero;

cout<<primo(numero)<<endl;
	return 0;
}

// processamento


// saída de dados


