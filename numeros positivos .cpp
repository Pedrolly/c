#include <iostream>  // padr�o de entrada e sa�da no C++
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da

using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
	// declara��es
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
// sa�da de dados
	med = (numpos / denomi);
	if(num < 0)
	{
		 cout << med << endl;
	}
	
 return 0;
}
