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
	int sex, idade, Mnov, candidatos, idmvel; //idade mais nova,idade mais velha
	string nome, estado, nmnov, nmvel; //nome mais novo,nome mais velho
char curso, SP, RJ, MG,T,S,M//estados e cursos
	float mascspm;//homens de s�o paulo com ensino m�dio
	mnov == 9999999;
	idmvel = 0;;
	// entrada de dados
	cout"Entre com o sexo(1- masc,2-fem,0 para sair)" << endl;
	cin << sexo;
	while(sexo != 0)
// processamento

	{
		cout << "Entre com o seu nome" << endl;
		cin >> nome
			cout << "entre com a sua idade" << endl;
		cin >> idade;
		cout << "Entre com o seu estado(MG para minas gerais,RJ para Rio de janeiro,SP para s�o paulo)" << endl;
		cin << estado;
		cout << "entre com o seu curso(S-supletivo,M-m�dio,T-t�cnico) " << endl;
		cin >> curso;
		candidatos = candidatos + 1;
		if(idade < mnov)
		{
			idade = mvel;
			nome = nmvel;
		}
		if(idade > idmvel)
		{
			idade = mnov;
			nome = nmnov;
		}
		if(curso == 'm' && estado == "SP")
		{
			mascspm = mascspm + 1;
		}
        if(curso != 'm' && estado != "SP")	
		{
		 candidatos = candidatos + 1;	
		} 
   }
// sa�da de dados
if(candidatos > 0)			
        cout<<" o mais v�lho �: "<< nmvel<<"Ele(a) tem "<<mvel<<Endl; 
        cout<<"porcentagem dos paulista que fizeram ensino m�dio"<<	
else cout<<"sem dados para an�lise"<<endl;
return 0;
}