#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int n, l, i, maiorl, maiorc;
	float linha, coluna;
	maiorl = 99999;
	maiorc = 99999;
cout << "Entre com o tamanho da matriz" << endl;
	cin >> n;
	float mat[n][n];
	for(i = 0; i < n; i++)
	{
		for(l = 0; l < n;l++)
		{
			
			cin >> mat[i][l];
			if(mat[i][l] <= maiorl)
			{
				linha = i;
				coluna = l;
				maiorl = mat[i][l];
			}


		}
	}
	cout << "Menor = " << maiorl << endl;
	cout << "Linha " << linha << endl;
	cout << "Coluna " << coluna << endl;
	return 0;
}
