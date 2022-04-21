#include <iostream>  // padrão de entrada e saída no C++
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída

using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortográfica em português

	// declarações
	string nome, nma, nme;
	float salario, maior, menor;
	int qtotal, qparcial;
	qtotal = 0;
	qparcial = 0;
	maior = 0;
	menor = 999999999;
	// entrada de dados
	
	cout << "entre com o nome(fim para sair)" << endl;
	cin >> nome;

	while(nome != "fim")
	{
// processamento
		cout << "Entre com o salário" << endl;
		cin >> salario;
		qtotal = qtotal + 1;
		if(salario > maior)
		{
			maior = salario;
			nma = nome;
		}
		if(salario < menor)
		{
        menor = salario;
		nme = nome;
		}
		cout << "entre com o nome(fim para sair)" << endl;
	cin >> nome;
	}
	// saída de dados
if(qtotal > 0)
{
	cout<<"maior salário: "<< maior <<" de " <<nma<<endl;
    cout<<"menor salário: " << menor<< " de " <<nme <<endl;
    cout<<"porcetagem > 2000"<< (qparcial * 100)/qtotal <<"%"<<endl;
}
else cout<<"sem dados para análise"<<endl;
	return 0;
}
