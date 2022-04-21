#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


using namespace std; // para usar bibliotecas

float num();//variável global a ser usada no main e na função secundária

void primo()//protótipo da funçãio primo
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
		cout << "o numero " << num << " é primo" << endl;
	else cout << "O numero não é primo" << endl;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
// declarações
	int num;
// processamento
	do
	{
		cout << "Entre com um numero natural(inteiro)" << endl;
		cin >> num;

	}
	while(num ==  0 || num != floor(num)); //while(!(num >=0 || num == flçoor(num)));

	primo();//chamada da função

// saída de dados


		return 0;
}


