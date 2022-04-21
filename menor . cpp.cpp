#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int n, l, k, i, maiorl, maiorc, menorl, menorc;
	float mat[n][n], linha, coluna, valor;
	maiorl = 0;
	maiorc = 0;
	menorl = 99999;
	menorc = 99999;
	cout << "Entre com o tamanho da matriz" << endl;
	cin >> n;
	for(i = 0; n < i; n++)
		for(l = 0; l < n; n++)
		{
			cout<<"Entre com a posição " << i << l << endl;
			cin >> mat[i][l];
			if(mat[i][l] <= maiorl)
			{
				valor = mat[i][l];
				linha = i;
				coluna = l;
			}


		}
cout<<" menor = "<< valor <<endl;
cout <<"linha ="<< linha << endl;
cout<< "coluna ="<<coluna << endl;
	return 0;
}
