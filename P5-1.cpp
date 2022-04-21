#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	string nome[4];
	float notas[4], soma, media;
	int i;
	soma = 0;
	for(i = 0; i < 4; i++)
	{
     cout<<"Entre com o nome do aluno"<<endl;
	cin >>nome[i];
	do{
        cout<<"Entre com a nota do aluno"<< i <<"De 0 a 10"<<endl;
		cin>> notas[i];	
	  }while(notas[i] < 0  || notas[i] < 10);
		  soma = soma + 1;
	  
	
	}
media=soma/4;	
	cout<<nome[i]<<" Sua nota foi "<<notas[i]<<" E a media da turma foi"<<media<<endl;
	
	
	
	return 0;
}
