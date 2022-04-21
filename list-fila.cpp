#include <iostream>
#include <list>
using namespace std;
int main()
{
list<int>pilha;	
	int x;
cin>>x;
pilha.push_back(x);
cin>>x;
pilha.push_back(x);
cin>>x;
pilha.push_back(x);	
cin>>x;
pilha.push_back(x);	
do
{
	x = *pilha.begin();
		cout <<" "<< x;
		pilha.pop_front();	
}while(!pilha.empty());
	return 0;
}