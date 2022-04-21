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




// saída de dados


	return 0;
}