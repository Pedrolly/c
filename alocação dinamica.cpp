#include <iostream>
#include <iomanip>
using namespace std;
struct dado
{
	float nota;
	float nota2;
	float nota3;
	float nota4;
	float media;
} ;
float media(dado * notas)
{
   notas->media = (notas->nota + notas->nota2 + notas->nota3 + notas->nota4) / 4;
}
int main()
{
    
    dado * notas = new dado;
	float a;
	float b;
	float c;
	float d;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	notas->nota = a;
	notas->nota2 = b;
	notas->nota3 = c;
	notas->nota4 = d;

    media(notas);
  
    cout << "A media e: " << notas->media;

    delete notas;
	return 0;
}
