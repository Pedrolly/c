#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português
// declarações
float m[10][10],prod,x,y;
int l,c,xx;
prod = 1;
	
// processamento
do
{
cout<<"Entre com o numéro de linhas( >1 e <= 10)"<< endl;
cin>>x;	
}while(x != floor(x) || x <= 1 || x>10);
xx= x;
do
{
	cout<<"Entre com o número de colunas( > 1 e <= 10)"<< endl;
cin>>y;
}while(!(y ==floor(y) && y>1 && y<=10));

for(l =0;l < x;l++)
	for(c = 0;c < y;c++)
	{
		cout<<"Entre comm o elemento "<< l <<"," << c << ":"<< endl;
		cin>> m[l][c];
	if(c ==0 || l ==x-1)
	prod = prod*m[l][c];

	}




// saída de dados
cout<<" O produto é "<< prod << endl;

	return 0;
}

