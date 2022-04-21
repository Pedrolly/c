#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int coddes, jack, be, av, na, simp, idade, mulnar, total;
	float adultobe, percadultobe;
	char sex, prog;
	mulnar = 0;
	jack = 0;
	be = 0;
	av = 0;
	na = 0;
	simp = 0;
	adultobe = 0;
	total = 0;
cout<<"Entre com (S) ou (N)"<<endl;	
	cin >> prog;
	while(prog != 'N')
	{
	cout<<"Entre com um numero de  1 a 5"<<endl;	
		cin >> coddes;
	cout<<"Entre com F ou m"<<endl;	
		cin >> sex;
	cout<<"Entre com a sua idade"<<endl;	
		cin >> idade;
		cout<<"Entre com (S) ou (N)"<<endl;	
	cin >> prog;
		total = total + 1;
		if(sex == 'f' && coddes == 1)
		{
			mulnar = mulnar + 1;
		}
		if(idade < 30 && coddes == 4 && sex == 'm');
		{
			adultobe = adultobe + 1;
		}
		if(coddes == 1)
		{
			na = na + 1;
		}
		if(coddes == 2)
		{
			av = av + 1;
		}
		if(coddes == 3)
		{
			simp = simp + 1;
		}
		if(coddes == 4)
		{
			be = be + 1;
		}
		if(coddes == 5)
		{
			jack = jack + 1;
		}



	}



	if(na > av  &&  na > simp  && na > be  && av > jack)
	{
		cout << " Desenho que mais marcou: Naruto" << endl;
	}
	if(av > na  && av > simp  && av > be  && av > jack)
	{
		cout << " Desenho que mais marcou: Avatar" << endl;
	}
	if( simp > na && simp > av && simp > be  && simp > jack)
	{
		cout << " Desenho que mais marcou:Simpsons" << endl;
	}
	if(be > na && be > av && be > simp && be > jack)
	{
		cout << " desenho que mais marcou : Bob Esponja" << endl;
	}
	if(jack > na && jack > av && jack  > simp && jack > be)
	{
		cout << "  desenho que mais marcou :As aventuras de Jackie Chan" << endl;

	}

	cout << "Quant. de mulheres que assistiram Naruto:" << mulnar << endl;
	percadultobe = ((adultobe * 100) / total);
	cout << "Porcentagem de homens com menos de 30 anos que gostavam de Bob Esponja:" << percadultobe << "%" << endl;




	return 0;
}
