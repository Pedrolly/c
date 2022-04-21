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
	int k, i, j, mat[5], aprovados = 0;
	float percent = 0, Nota;
	char resp[5], gabarito[5];
// processamento
	cout << "Entre com o gabarito " << endl;
	for(j = 0; j < 5; j++)
	{
		cin >> gabarito[j];
	}
	for(i = 1; i < 5; i++)
	{
		cout << "Entre com a matr�cula do aluno " << i << endl;
		cin >> mat[i];
		Nota = 0;
		cout << "Entre com as respostas do aluno " << mat[i] << endl;
		for(k = 0; k < 5; k++)
		{

			cin >> resp[k];
			if(resp[k] == gabarito[k])
			{
				Nota = Nota + 1;
			}
		}
		if(Nota >= 3.5)
		{
			aprovados = aprovados + 1;
		}
		cout << "Nota do aluno " << mat[i] << " foi " << Nota << endl;
	}
	percent = (aprovados * 100) / 5;
	cout << "Porcentagem de Alunos aprovados" << percent << "%" << endl;




	return 0;
}

