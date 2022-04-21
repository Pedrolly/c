#include <iostream>
#include <iomanip>
using namespace std;
void inverte(double *a,double *b)
{
float aux;
aux = *a;
*a=*b;
*b=aux;
}
int main()
{
double x,y;//ariáveis
cin>>x;
cin>>y;	
inverte(&x,&y);
cout<<x<< " "<<y<<endl;	
	return 0;
}