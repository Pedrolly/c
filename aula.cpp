#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
int main()
{
	int vetor[100], i, j, k, tmp, cont;
	cin >> i;

	j = 0;
	cont = 0;
	tmp = 0;
	while(!(i == 0 ))
	{
		cont++;
		vetor[j] = i;
		 j++;
        cin >> i;
	}
cin >> k;	
	for(j = 0;j < cont;j++)
	{
		if(vetor[j] == k)
		tmp = 1;
		cout<<"Encontrado na posição"<< i <<endl;
	}
	if(tmp == 0)
	
	cout<<"Nâo encontrado "<<endl;
	
	return 0;
}
