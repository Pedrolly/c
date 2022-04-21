#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
int I = 1;
int SOMA = 0;		 			 
do		
{							
I = I + 1;
SOMA = SOMA + pow(I,2);
I++;				
}while(I < 1001);						
cout << SOMA;
	
	
	return 0;
}