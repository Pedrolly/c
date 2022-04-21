#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int m, i, j, estado,municipio;
	float mat[5][3], maispop, media, soma = 0;
	maispop = 0;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cout << "Entre com a população da cidade " << i << j << endl;
			cin >> mat[i][j];

			if(mat[i][j] > maispop)
			{
				maispop = mat[i][j];
				estado = i;
			municipio = j;
			}
			
		}

	
soma = soma + mat[i][0];
	}
	media = soma / 5;
	cout << "Munícipio : " << municipio << endl;
	cout << "estado : " << estado << endl;
	cout << "Média : " << media << endl;
	return 0;
}
