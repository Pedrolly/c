#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;
int main()
{
	int n, vetor[100], soma, abaixomed;
	float media, somatot;
	soma = 0;
	somatot = 0;
	cout << "Entre com o valor de n" << endl;
	cin >> n;
	for(n = 0; n < 100; n++)
	{
		cin >> vetor[n];
		somatot = somatot + vetor[n];
		soma = soma + 1;				
	}
media = (somatot / soma);
cout << "Media :"<<endl;		
		if(vetor[n] > media)
		{
			abaixomed = abaixomed + 1;
		}
	

	cout << "maior que a media"<<abaixomed << endl;

	return 0;
}
