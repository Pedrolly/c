#include <iostream>  // padr�o de entrada e sa�da no C++
#include <cmath>     // inclui fun��es matem�ticas
#include <cstring>   // inclui fun��es de manipula��o de string
#include <locale>    // inclui fun��o para se usar palavras em portugu�s
#include <iomanip>	 // inclui fun��es de configura��o de sa�da

using namespace std; // para usar bibliotecas

int main()
{
	setlocale(LC_ALL, "Portuguese");  // habilita a estrutura ortogr�fica em portugu�s

	// declara��es
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
		cout << "Entre com o sal�rio" << endl;
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
	// sa�da de dados
if(qtotal > 0)
{
	cout<<"maior sal�rio: "<< maior <<" de " <<nma<<endl;
    cout<<"menor sal�rio: " << menor<< " de " <<nme <<endl;
    cout<<"porcetagem > 2000"<< (qparcial * 100)/qtotal <<"%"<<endl;
}
else cout<<"sem dados para an�lise"<<endl;
	return 0;
}
