#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar bibliotecas
void divisivel (int numero)
{
	if(numero % 2 == 0 && numero % 3 == 0)
		cout << "� divis�vel por 2 e 3" << endl;
	else cout << "N�o � divis�vel por 2 ou por 3" << endl;
	return;
}
	int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
// declara��es
float num;

do
{
	cout<<"Entre com um numero inteiro"<<endl;
	cin>>num;
}while( num != floor(num));

	// processamento
divisivel(num);


// sa�da de dados


	return 0;
}

