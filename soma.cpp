#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	int mat[A][B];
	for(A = 1; A >= 1 ; A++)
		for(B = 1; B >= 1; B++)
			int i,j;
			int mat[i][j]
			int s = 0;
	for(int i = 0; i < A; i++)
	{
		s += mat[i][0];
		mat[i][0] = s;
	}
	for(int j = 0; j < B; J++)
	{
		s += mat[0][j];
	    mat[j][0] = s;
	}
 for(int i = 1; i < A; i++) //cálculo do restante da matriz de soma
        for(int j = 1; j < B; j++)
int soma[i][j] = mat[i][j] + soma[i-1][j] + soma[i][j-1] - soma[i-1][j-1];
cout<<soma[i][j]<<endl;

		return 0;
}
