#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


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


// saída de dados


