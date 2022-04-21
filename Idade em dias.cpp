#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	int dias,mes,ano,diastotal,anomes,mesdia,anodia;
	
	cin>>diastotal;
			
	ano =(diastotal/365); 		
	anomes = diastotal%365;
	cout<<ano <<" ano(s)"<< endl;	
	mes=anomes/30;
	anodia = anomes%30;
	cout<< mes << " mes(es)"<<endl;
	cout<<anodia << " dia(s)"<<endl;
	
	return 0;
}