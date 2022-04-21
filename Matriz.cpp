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
	int num,qpares,l,c;
	float cont,spares,mat[2][4];
	spares = 0;
	qpares = 0;
	cont = 0;
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 4; c++)
		{
			do
			{
				cout << "Entre com o elemento" << endl;
				cin >> mat[l][c];
			}
			while(mat[l][c] != floor(mat[l][c]));
			num = mat[l][c];
			if(mat[l][c] > 12 && mat[l][c] < 20)
				cont = cont + 1;
			if(num % 2 == 0)
			{
				spares = spares + 1;
				qpares = qpares + 1;
			}
		}
	cout<<"Na linha "<< l <<": " << cont << endl;
	}
if(qpares > 0)
	cout<<"Media dos pares"<< spares/qpares << endl;
else cout << "Sem numéros pares nesta matriz"<< endl;

	


	return 0;
}
