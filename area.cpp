#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
float raio,pi = 3.14159,area;	
	
cout<<">>";
cin>>raio;

area = pi*(raio*raio);
cout<< fixed << setprecision(3);
cout<<"<< AREA = "<<area<<endl;
	
	return 0;
}