
#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n; //contadores de criatorios
	int custo[100][100];//numero máximo de cidades
	int criatoriosinicial;


	cin >> n;


	cin >> criatoriosinicial;
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
		{
			cout << "Entre com o custo de ir ao criatórios " << i << " para o criatórios " << j << endl;
			cin >> custo[i][j];
			custo[j][i] = custo[i][j];
		}


	bool visita[100];
	int menorcusto;
	int custo_at;
	int criatoriosatual;
	int proximocriatorio;
	for(int z = 0; z < n; z++)
		visita[z] = false;

	criatoriosatual = criatoriosinicial;
//metodo guloso
					  menorcusto = 0;
	for(int i = 0; i < n - 1; i++)
	{
		visita[criatoriosatual] = true;//visitado criatorio atual
		//marca a proxima visita
		custo_at = INT_MAX;
		for(int j = 0; j < n; j++)
		{
			if(!visita[j] && custo_at > custo[criatoriosatual][j])
			{
				proximocriatorio = j;
				custo_at = custo[criatoriosatual][j];
			}
		}
		menorcusto += custo_at;
		criatoriosatual = proximocriatorio;
	}
	menorcusto += custo[criatoriosatual][criatoriosinicial];
	cout << "Menor custo = " << menorcusto << endl;
	return 0;
}






