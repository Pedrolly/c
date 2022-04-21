#include <iostream>  // padrão de entrada e saída no C++
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>    // inclui funções de configuração de saída
using namespace std;
int main(int argc, char** argv)
{
	char g1, g2, g3, r1, r2, r3; //3 gabaritos e 3 respostas

	//entradada de dados
	cout << "entre com o gabarito 1 ";
	cin >> g1;
	cout << "entre com o gabarito 2 ";
	cin >> g2;
	cout << "entre com o gabarito 3 ";
	cin >> g3;
	cout << "entre com a resposta 1 ";
	cin >> r1;
	cout << "entre com a resposta 2 ";
	cin >> r2;
	cout << "entre com a resposta 3 ";
	cin >> r3;
	//processamento e saída de dados
	if(r1 != g1 && r2 != g2 && r3 != g3)
		cout << "ELIMINADO" << endl;
	else
	{
		if(r1 == g1)
			cout << "voce acetou questao 1" << endl;
		if(r2 == g2)
			cout << "voce acertou questao 2" << endl;
		if(r3 == g3)
			cout << "voce acertou a questao 3" << endl;
	}

	return 0;

}
