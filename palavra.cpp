#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
int main()
{
	char palavra[50], palavra2[50], cola[50];
	int c, tamanho;

cin >> c;

switch(c)
{
case 1:
	cin.ignore();
	cin.getline(palavra,50);
	cin.getline(palavra2,50);
	if(strcmp(palavra,palavra2)== 0);
	{
		cout<<"Iguais"<<endl;
	}
 if(strcmp(palavra,palavra2)!= 0);
	{
		cout<<"Diferentes"<<endl;
	} 
	break;

case 2:
	cin>> palavra;
	strcpy(cola,palavra);
	
	cout << cola;

	
	
	break;

case 3: 
	cin.ignore();
	cin.getline(palavra,50);
	

tamanho = strlen(palavra);
cout<<tamanho<<endl;


break;

default:
cout<<"operação inválida"<<endl;
}




	return 0;
}
