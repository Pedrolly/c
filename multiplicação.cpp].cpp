#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar biblioteca
void tabuada(int numero,int vetor[11])
{
	for(int i = 0;i <= 10;i++)
	{
		vetor[i] = numero*i;
	}

}
int main()
{
int numero;	
int vetor[11];	
cin>> numero;	
	
tabuada(numero,vetor);	
for(int i = 0;i <= 10;i++)
{
	cout<<i <<" x "<< numero << " = "<< vetor[i]<< endl;
}	
	
	
	return 0;
}

// processamento


// sa�da de dados


