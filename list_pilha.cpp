#include <iostream>
#include <list>
using namespace std;
int main()
{
list<int> pilha;
int x;
int i;

cin>>x;
pilha.push_front(x);	
cin>>x;
pilha.push_front(x);	
cin>>x;
pilha.push_front(x);	
cin>>x;
pilha.push_front(x);	
while(!pilha.empty())
{
		x = *pilha.begin();
		cout <<" "<< x<<"gears"<<endl;
		pilha.pop_front();
}
	return 0;
}