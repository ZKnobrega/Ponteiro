#include <iostream>
#include <time.h>

using namespace std;

int greater_value(const int *, const int);

int main(int argc, char const *argv[])
{

    const int N = 10;
    int vetor[N];

    cout << "Informe 10 valores inteiros: " << endl;
    for (int i = 0; i< N; i++){
        cout << "vetor[" << i << "]: ";
        cin >> vetor[i];
    }

    int posicao = greater_value(vetor, N);

    cout << "A posição que contém o maior valor é " << posicao << endl;

	return 0;
}

int greater_value(const int *vetor, const int tamanho){
    int gv = 0;
    int posicao;
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] > gv){
            g6v = vetor[i];
            posicao = i;
        }
    }

    return posicao;
}
