#include <iostream> // padr�o de entrada e sa�da no C++ 
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da


using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s
// declara��es
float m[10][10],prod,x,y;
int l,c,xx;
prod = 1;
	
// processamento
do
{
cout<<"Entre com o num�ro de linhas( >1 e <= 10)"<< endl;
cin>>x;	
}while(x != floor(x) || x <= 1 || x>10);
xx= x;
do
{
	cout<<"Entre com o n�mero de colunas( > 1 e <= 10)"<< endl;
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




// sa�da de dados
cout<<" O produto � "<< prod << endl;

	return 0;
}

