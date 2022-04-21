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
	int sex, idade, Mnov, candidatos, idmvel; //idade mais nova,idade mais velha
	string nome, estado, nmnov, nmvel; //nome mais novo,nome mais velho
char curso, SP, RJ, MG,T,S,M//estados e cursos
	float mascspm;//homens de são paulo com ensino médio
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
		cout << "Entre com o seu estado(MG para minas gerais,RJ para Rio de janeiro,SP para são paulo)" << endl;
		cin << estado;
		cout << "entre com o seu curso(S-supletivo,M-médio,T-técnico) " << endl;
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
// saída de dados
if(candidatos > 0)			
        cout<<" o mais vélho é: "<< nmvel<<"Ele(a) tem "<<mvel<<Endl; 
        cout<<"porcentagem dos paulista que fizeram ensino médio"<<	
else cout<<"sem dados para análise"<<endl;
return 0;
}