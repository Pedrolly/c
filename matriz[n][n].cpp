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
	int n, l, k;
	float mat[n][n],soma = 0;
// processamento
	cout << "Entre com o N " << endl;
	cin >> n;
for(l = 0; l < n;l++)
	{
		for(k = 0; k < n; k++);
    cout<<"Entre com a matriz "<< l << k;
	cin>>mat[l][k];
	soma = mat[l][k] + mat[l+1][k+1]; 
    }
cout<<soma<<endl;




// sa�da de dados


	return 0;
}