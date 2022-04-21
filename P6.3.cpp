#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

double calculomedia(double n1,double n2,double n3,char letra)
{

double calcmedia;
	
	if(letra == 'A')
	{
		calcmedia = ((n1*5) + (n2*3) + (n3*2))/(5+3+2); 
	return calcmedia;
	}
    else
	{
		calcmedia = (n1+n2+n3)/3;
	return calcmedia;
	}
		
	
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	double n1, n2, n3, media;
	char letra;
int i;
		 for(i = 0; i < 3; i++)
	{
		cout << "Entre com a nota 1 do aluno" << endl;
		cin >> n1;
		cout << "Entre com a nota 2 do aluno" << endl;
		cin >> n2;
		cout << "Entre com a nota 3 do aluno" << endl;
		cin >> n3;
		cout << "Entre com a letra para calcular a media" << endl;
		cin >> letra;
	
	media = calculomedia(n1,n2,n3,letra);
	
	cout<<"A media do aluno foi : "<<media<<endl;
	}







	return 0;
}
