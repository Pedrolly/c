#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	float punit[5], quant[5], total, maior;
	string nome[5], nomema;
	int i;
	total = 0;
	maior = 0;
	for(i = 0;i < 5; i++)
	{
		cout << "Entre com o nome da mercadoria : " << i << endl;
		getline(cin, nome[i]);
		cout << "Entre com o preço unitário da mercadoria " << i << endl;
		cin >> punit[i];
		cout << "Entre com a quantidade da mercadoria " << i << endl;
		cin >> quant[i];
		cin.ignore();
		total = total + (punit[i] * quant[i]);
		if(punit[i] * quant[i] > maior)
		{
			maior = punit[i] * quant[i];
			nomema = nome[i];
		}


	}
	cout << "Sucesso de vendas " << nomema << endl;
	cout << "Faturamento total mensal R$ " << total << endl;
	cout << "Porecentagens " << endl;
	for(i = 0; i < 5; i++)
	{
		cout << nome[i] << "Obteve " << ((punit[i]) * quant[i] * 100) / total << "%" << endl;
	}




	return 0;
}
