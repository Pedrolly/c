#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int i, n, num;
	float precagua, preccos, aguatot, maiorcom;
	char codcor;
	precagua = 0.72;
	maiorcom = 0;
	cout << "Entre com a quantidade de consumidores(>0)" << endl;
	cin >> n;
for(i = 0; i < n; i++)
		while(n < 0)
		{
			cout << "Entre com o seu numero" << endl;
			cin >> num;
			cout << "Entre com o seu codigo comercial" << endl;
			cin >> codcor;
			cout << "Entre com o seu consumo de água" << endl;
			cin >> preccos;
			aguatot = precagua * preccos;
			if(aguatot > maiorcom)
			{
				maiorcom = aguatot;
			}
		
		
		
		}
	return 0;
}	
	


	

