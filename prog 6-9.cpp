#include <iostream>
#include <iomanip>

using namespace std;
bool verifica(float x, float y, float z)
{
	bool sim;
	if( x < y + z && y < z + x && z < y + x)
		sim = true;
	else sim = false;
	return sim;
}

float permitero(float x, float y, float z)
{
	return x + y + z;
}

int main()
{
	float l1, l2, l3;

	do
	{
		cout << "Entre com o primeiro lado" << endl;
		cin >> l1;
	}
	while(!(l1 > 0));
	do
	{
		cout << "Entre com o segundo lado" << endl;
		cin >> l2;
	}
	while(!(l2 > 0));
		do
		{
			cout << "Entre com o terceiro lado" << endl;
			cin >> l3;
		}
		while(!(l3 > 0));

			if(verifica(l1, l2, l3) == true)

				cout << "O perimétro é" << (l1, l2, l3) << endl;
	return 0;
}
