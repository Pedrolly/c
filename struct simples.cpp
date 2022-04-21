#include <iostream>
#include <iomanip>
using namespace std;
struct Simples
{
	int mat;
	float nota1;
	float nota2;
};
int main()
{
	Simples simp1;
	simp1.mat;
	simp1.nota1;
	simp1.nota2;
	cin >> simp1.mat;
	cin >> simp1.nota1;
	cin >> simp1.nota2;			
	cout<<fixed<<showpoint<<setprecision(2);
	cout << "Matricula do aluno: " << simp1.mat << endl;
	cout << "Nota da primeira prova: " << simp1.nota1 << endl;
	cout << "Nota da segunda prova: " << simp1.nota2 << endl;
	return 0;
}
