#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


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


// sa�da de dados


