#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int vetor,n, voto, somlik = 0, somdis = 0;

	cout << "Entre com a quantidade de votos" << endl;
	cin >> n;

	for(int i = 1; i <= n; i++)
	{
		cout << "Entre com o voto da pessoa(1- para gostei -1 para dislike): " << i << endl;
		cin >> voto;
		if(voto == 1)
		{
			somlik = somlik + 1;
		}
		if(voto == -1)
		{
			somdis = somdis + 1;
		}
	}
if(somlik > somdis)
{
	cout<<"A maioria gostou"<<endl;
}
if(somlik < somdis)
{
	cout<<"A maioria nao gostou"<<endl;
}
if(somlik == somdis)
{
	cout<<"Deu empate"<<endl;
}
return 0;
}
