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
else cout << "Sem num�ros pares nesta matriz"<< endl;

	


	return 0;
}
