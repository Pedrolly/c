#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, char** argv)
{
	int idade, estado, mvel;
	char Curso, t, m, s;
	int sm, sc, sp, spr, st;
	cout << " entre com a idade(pressione 0 para sair)" << endl;
	cin >> idade;
	st = 0;
	sm = 0;
	sp = 0;
	sc = 0;
	spr = 0;
	mvel = idade;
	while(idade > 0)
	{
		cout << "entre com o estado (1 = rj,2 = sp, 3 = mg, " << endl;
		cin >> estado;
		cout << "entre com o seu curso (tecnico = t, medio = m, supletivo = s)" << endl;
		cin >> Curso;
		if (estado == 3)
		{
			if(Curso == t);
			sm = sm + 1;
			cout << "mineiro com curso tecnico" << sm << endl;
		}
        if(Curso != t)
		{
			st = st + 1;
			cout << "n�o fizeram t�cnico" << endl;

		}

		if (estado == 2)
		{
			sp = sp + 1;
			cout << " os numeros de paulistas s�o " << sp << endl;
		}
		if(estado == 1)
			sc = sc + 1;
		cout << " o numero de cariocas s�o " << sc << endl;
	}

	cout << "numero de mineiros com curso tecnico " << sm << endl;
	if(idade < mvel)
		cout << "a idade da pessoa mais velha � " << idade << endl;
	else cout << "a idade da pessoa mais velha � " << mvel << endl;



	return 0;
}
