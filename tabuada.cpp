#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


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
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
// declarações
	
// processamento
int num,resultado;	
	cout<<"Entre com um numero"<<endl;
	cin>>num;
resultado = calcmulti(num);
cout<< resultado<<endl;
// saída de dados


		return 0;
}

