#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int vetor[31],n,numero;

		for(int i = 1; i <= 30; i++)
	{
		vetor[i] = 0;
	}

	cin >> n;
   
   for(int i = 0; i < n; i++)
   {
   	cin >> numero;
   	
   	vetor[numero] = vetor[numero] + 1;
   	
   }

 
   for(int i = 1; i < 30; i++){
   cout<< vetor[i];
   }
				 return 0;
}
