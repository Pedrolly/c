#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int> lista;
	list<int> lista2;
	list<int> pilha;
	int x;
	bool achou;
	// Processa a lista 1
	// ler o primeiro valor
	cin >> x;
	// teste no "topo" - coloque aqui a condicao que faz o loop CONTINUAR, ou seja
	// o oposto do que faria o loop PARAR
	while (x !=0)
	{
	    // Processe cada item
		lista.push_back(x);
		// leia o proximo item
		cin >> x;
	} ;
	// repete o mesmo para a lista 2
	cin >> x;
	while (x !=0)
	{
		lista2.push_back(x);
		cin >> x;
	} ;
	// copia a primeira lista para PILHA na ordem em que está (já está ordenada)
	  for (list<int>::iterator it=lista.begin(); it != lista.end(); ++it)
            pilha.push_back(*it);
    // copia a segunda lista para PILHA colocando cada elemento em seu lugar
	  for (list<int>::iterator it=lista2.begin(); it != lista2.end(); ++it) {
	        // este FLAG avisa se conseguimos colocar o elemento de LISTA2 no meio de PILHA
	        // porque havia pelo menos um elemento maior que ele
	        achou = false;
	        // percorre PILHA comparando cada elemento com o elemento que está
	        // apintado pelo iterator IT
            for (list<int>::iterator it2=pilha.begin(); it2 != pilha.end(); ++it2)  {
                // o elemento apontado em PILHA é maior que o elemento apontado em LISTA2:
                // entao o elemento de LISTA2 deve ser inserido aqui
               if (*it2 > *it) {
                   pilha.insert(it2,*it);
                   // flag informando que encontrou um lugar para ele
                   achou = true;
                   // pode deixar o loop
                   break;
               } 
            }
            // se nao achou um lgar pera o elemento, é porque ele é o maior de todos
            // entao entra no fim de PILHA
            if (! achou)
               pilha.push_back(*it);
	  }
	  // imprime o conteudo de PILHA
	  for (list<int>::iterator it=pilha.begin(); it != pilha.end(); ++it)
            cout << ' ' << *it;


	return 0;
}
