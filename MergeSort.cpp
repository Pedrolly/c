#include <iostream>
using namespace std;
void merge(int B[], int p, int C[], int q, int A[])
{
	int i = 0, k = 0, j = 0, m;
	while(i < p && j < q)
		if(B[i] <= C[j])
			A[k++] = B[i++];
		else
			A[k++] = C[j++];
	if(i == p)
		for(m = j; m <= q - 1; m++)
			A[k++] = C[m];
	else
		for(m = i; m < p; m++)
			A[k++] = B[m];
}
void mergesort(int A[], int tamanho)
{
	int B[10];
	int C[10];
	int tamb = tamanho / 2;
	int tamc = tamanho - tamb;
	int i;
	if(tamanho > 1)
	{
		//copiando a primeira metade de A para B
		for(i = 0; i < tamanho / 2; i++)
			B[i] = A[i];
		//copiando a segunda metade de A para C
		for(i = tamanho / 2; i < tamanho; i++)
			C[i - tamanho / 2] = A[i];
	}
//chamadas recursivas
	mergesort(B, tamb);
	mergesort(C, tamc);
//juntando b e c em a
	merge(B, tamb, C, tamc, A);
}

int main()
{
	int n[1000];
	int x;

	cout << "entre com a quantidade de numeros nesse vetor" << endl;
	cin >> x;
	for(int z = 0; z < x; z++)
	{
		cout << "Entre com o numeros do vetor N" << endl;
		cin >> n[z];
	}
	mergesort(n, x);
	for(int i = 0; i < x; i++)
		cout << n[i] << endl;

	return 0;
}
