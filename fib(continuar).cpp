#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float fib;
	int N,X;
	cin>>N;
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=N;i++);
		fib[i]=fib[i-1]+fib[i-2];
	cout<<"fib"<<(N)<<"="<<X<<endl;
	return 0;
}
