#include <iostream>
using namespace std;
struct dado
{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
};
int main()
{
   float media;
    dado *x;
	x=new dado;	
		cin>>x->nota1;
		cin>>x->nota2;
		cin>>x->nota3;
		cin>>x->nota4;
	media=((x->nota1)+(x->nota2)+(x->nota3)+(x->nota4))/4;	
cout<<media<<endl;	
delete[]x;
	return 0;
}