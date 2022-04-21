#include <cstring>    
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
int main()
{
    float porc2 = 0;
    float porc1 = 0;
    int n, idade, aux = 0;
    string nome;
    char cp;
    cin >> nome;
    cin >> idade;
    cout << "tem casa    própria (S para sim),(N para não),0 para sair" << endl;
    while( aux < n)
    {
getline(cin,nome);
        cin.ignore();
        cin >> idade;


        cin >> cp;


        if(idade <= 18 && cp == 's');


        porc1++;


        if(cp == 'n')


            porc2++;


        aux ++;
    }
    cout << "porcentagem de pessoas com casa própria" << (porc1 / n) * 100 << endl;
    cout << "porcentagem de pessoas sem casa própria" << (porc2 / n) * 100 << endl;


    return 0;
}
 










