#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar bibliotecas

float num();//vari�vel global a ser usada no main e na fun��o secund�ria

void primo()//prot�tipo da fun��io primo
{
	int i, qd; //controle do for e quantidade de divisores
	int num_int;
	num_int = num;
	qd = 0;
	for(i = 1; i <= num; i++)
	{
		if(num % i == 0)
			qd = qd + 1;
	}

	if(qd = 2)
		cout << "o numero " << num << " � primo" << endl;
	else cout << "O numero n�o � primo" << endl;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
// declara��es
	int num;
// processamento
	do
	{
		cout << "Entre com um numero natural(inteiro)" << endl;
		cin >> num;

	}
	while(num ==  0 || num != floor(num)); //while(!(num >=0 || num == fl�oor(num)));

	primo();//chamada da fun��o

// sa�da de dados


		return 0;
}


