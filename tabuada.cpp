#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar bibliotecas

double calcmulti(int num,int multi)
{	
int i,j;
for(i = 0;i< 9;i++)
{
	multi = num*i;
}
return multi;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
// declara��es
	
// processamento
int num,resultado;	
	cout<<"Entre com um numero"<<endl;
	cin>>num;
resultado = calcmulti(num);
cout<< resultado<<endl;
// sa�da de dados


		return 0;
}

