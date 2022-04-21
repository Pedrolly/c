#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float media(float notas[100], float &nAlunos,float &notatot)
{
float media;	

media = notatot/nAlunos;
return media;
}


int main()
{
float nota[100],notatot = 0,nAlunos = 0;	
int n,i;	
float meditot;	
cout<<"Entre com o numero de alunos"<<endl;
cin>>n;	
	
for(i = 1;i <= n;i++)	
{
cout<<"Entre com a nota do aluno: "<< i<<endl;	
cin>>nota[i];
nAlunos = nAlunos + 1;
notatot = notatot + nota[i];
}

meditot=media(nota,nAlunos,notatot);
cout<<"Media da turma "<< meditot <<endl;
	return 0;
}