#include <iostream>
#include <iomanip>

using namespace std;
int main ()
 	{
float tempo = 0;
float pesoinic,peso;

cout<<"Entre com a massa inicial "<<endl;
cin>> pesoinic;
peso = pesoinic;
do
{	
	tempo = tempo + 40;
	peso = peso + (peso/3);
}while(peso <= 100);

cout<<"O tempo foi de "<< tempo <<" segundos" << endl;;
cout<<"a massa total foi de "<< peso <<" G"<<endl;
cout <<" A massa inicial foi de "<< pesoinic <<" G" << endl;
		return 0;
	}
