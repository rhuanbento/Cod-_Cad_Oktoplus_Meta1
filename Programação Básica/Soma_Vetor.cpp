#include <iostream>

using namespace std;

int soma_vetor(int N, int vetor[]){
    int soma = 0;

    for(int i = 0; i < N; i++){
        soma += vetor[i];
    }

    return soma;
}

int main(){
	
	int N, vetor[100100];
	cin >> N;
	
	for(int i = 0; i < N; i++)
		cin >> vetor[i];

	cout << soma_vetor(N,vetor) << "\n";
}