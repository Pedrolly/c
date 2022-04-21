#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	struct
	{
		int codigo, fisica, grupo;
		float nota, perctrab;
	} trabalho;
	int trab3 = 0, trab1 = 0,medialun,alunos=0;
	float nottota = 0, mednota = 0, media, perc5,trabtot=0,trab5=0;

	do
	{
		cout << "Entre com o codigo(zero ou negativo para sair)" << endl;
		cin>>trabalho.codigo;
		if (trabalho.codigo > 0 )
		{
		cout << "Entre com o a matéria(1 - Fisica 1, 2- Fisica 2,3 - fisica 3)" << endl;
		cin >> trabalho.fisica;
		cout << "Entre com a quantidade de alunos do grupo" << endl;
		cin >> trabalho.grupo;
		alunos = alunos +trabalho.grupo;
		trabtot = trabtot + 1;
		do 
		{
		    cout << "Entre com a nota do trabalho (0 a 100) " << endl;
		    cin >> trabalho.nota;
		} while (trabalho.nota < 0 || trabalho.nota > 100) ;
		
		if(trabalho.grupo > 5)
		{
        trab5 = trab5 + 1;
		}
		if(trabalho.fisica == 1)
		{
			trab1 = trab1 + 1;
		}
		nottota = nottota + trabalho.nota;
		mednota = mednota + 1;
		if(trabalho.fisica == 3 && trabalho.nota >= 80 && trabalho.nota <= 100)
		{
			trab3 = trab3 + 1;
		}
		}
	}while(trabalho.codigo > 0);

	cout << "A quantidades de trabalhos de fisica 1 foi de " << trab1 << endl;

	media = (nottota/ mednota);
	cout << "A média das notas foi de " << media<<endl;

	cout << "A quantidade de trabalhos de fisica 3 com notas entre 80 e 100 é de " << trab3 << endl;

    perc5 = (trab5*100/trabtot);

    cout << "A porcentagem de trabalho com mais de 5 integrantes é de " << perc5 <<" %"<<endl;

    medialun =(alunos/trabtot);

cout<<"A media de alunos é de " << medialun <<  endl;


	return 0;
}