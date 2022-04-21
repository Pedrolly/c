#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


using namespace std; // para usar bibliotecas
void divisivel (int numero)
{
	if(numero % 2 == 0 && numero % 3 == 0)
		cout << "É divisível por 2 e 3" << endl;
	else cout << "Não é divisível por 2 ou por 3" << endl;
	return;
}
	int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
// declarações
float num;

do
{
	cout<<"Entre com um numero inteiro"<<endl;
	cin>>num;
}while( num != floor(num));

	// processamento
divisivel(num);


// saída de dados


	return 0;
}

