#include <iostream> // padrão de entrada e saída no C++ 
#include <cmath>     // inclui funções matemáticas
#include <cstring>   // inclui funções de manipulação de string
#include <locale>    // inclui função para se usar palavras em português
#include <iomanip>	 // inclui funções de configuração de saída


using namespace std; // para usar biblioteca


int main()
{
//declaração
	struct registro
	{
		int sexo;
		string nome;
		char ec;
		int idade;
	} pop;
// ou registro pop; para nomear o struct
	int qparcial = 0;
	int somaid = 0;
	int maior = 0;
//"||"para apenas um ser verdadeiro
//"&&" para todas as comparações precisarem ser verdadeiras
	for(int i = 1; i <= 4; i++)
	{
//entrada de dados
cout<<"Entre com o nome"<<endl;

cin>>pop.nome;
do	
{
cout<<"Entre com a informação de sexo"<<endl;	
cin >> pop.sexo;
}while(pop.sexo != 1 && pop.sexo != 2);
do	
{
cout<<"Entre com o estado civil(C,S,D,V)"<<endl;	
cin>>pop.ec;
}while(pop.ec != 'C' && pop.ec != 'D' && pop.ec != 'S' && pop.ec != 'V');	
cout<<"Entre com a idade"<<endl;
cin>>pop.idade;	
//processamento
if(pop.ec =='C')
	qparcial = qparcial + 1;
somaid = somaid + pop.idade;
if(pop.sexo == 1 && pop.idade > maior)
	maior = pop.sexo;
	}
cout<<"Porcentagem de casados "<<(qparcial* 100.0)/4<<endl;
cout<<"média de idades"<< pop.idade/4 <<endl;
cout<< "Idade do mais velho"<< maior <<endl;


	return 0;
}

// processamento


// saída de dados


