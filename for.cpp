

#include <iostream>
using namespace std;
int main()
{
    int i;  // Variavel de Controle do For
int numero;  // Variavel para armazenar o numero que o usuario digitar
int soma = 0; // � importante inicializar a vari�vel
for(i = 0;i < 15;i++)  // A variavel i � respons�vel por fazer o for repetir 15 vezes
{
        cin >> numero;
/* 
           A variavel soma serve para armazenar a soma dos numeros 
           a medida que o usu�rio entra com eles
         */
soma = soma + numero;  
}
        
    cout<<soma<<endl;
    return 0;
}

