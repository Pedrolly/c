#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


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


// saída de dados


