#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float X, Y;
	int OP;
	cin >> X;
	cin >> OP;
	switch(OP)
	{

	case 1:
		Y = X * 3.86;
		std::cout.precision(2);
		cout << std::fixed << "R$ " << Y << endl;
		break;
	case 2:
		Y = X * 3.77;
		std::cout.precision(2);
		cout << std::fixed << "R$ " << Y << endl;
		break;
	case 3:
		Y = X * 4.41;
		std::cout.precision(2);
		cout << std::fixed << "R$ " << Y << endl;
	case 4:
		Y = X * 0.19;
		std::cout.precision(2);
		cout << std::fixed << "R$ " << Y << endl;

		break;
	case 5:
		Y = X * 5.00;
		std::cout.precision(2);
		cout <<  std::fixed << "R$ " << Y << endl;
		break;
	default:
		cout << "Codigo Invalido!" << endl;
		break;

	}
	return 0;
}











