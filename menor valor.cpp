#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar biblioteca

double menorvalor(double n1, double n2)
{
	if(n1 > n2)
		return n2;
	else return n1;

}
int main()
{
	double valor1, valor2;

	cin >> valor1 >> valor2;

cout<<menorvalor(valor1, valor2);

	return 0;
}

// processamento


// sa�da de dados


