

#include <iostream>
using namespace std;
int main()
{
    int i;  // Variavel de Controle do For
int numero;  // Variavel para armazenar o numero que o usuario digitar
int soma = 0; // É importante inicializar a variável
for(i = 0;i < 15;i++)  // A variavel i é responsável por fazer o for repetir 15 vezes
{
        cin >> numero;
/* 
           A variavel soma serve para armazenar a soma dos numeros 
           a medida que o usuário entra com eles
         */
soma = soma + numero;  
}
        
    cout<<soma<<endl;
    return 0;
}

