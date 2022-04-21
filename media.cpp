#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;
void media(double np1,double np2, double np3)
{
	cout<<(np1+np2+np3)/3<<endl;
}



int main()
{
double np1,np2,np3;	

cin >> np1 >> np2 >> np3;

media(np1,np2,np3);

	return 0;
}