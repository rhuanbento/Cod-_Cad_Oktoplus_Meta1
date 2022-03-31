#include <iostream>

using namespace std;

int main(){
    int N, Nvalores = 0, anterior = 0, conta = 1, ponto = 0, i, j;
    
    cin >> N;

    for(i = 0; i < N; i++){
        cin >> Nvalores;

        if(Nvalores == anterior){
            conta++;
            j = 1;
        }
        if(Nvalores != anterior and j == 1){
            conta = 1;
        }
        if(conta > ponto and j == 1){
            ponto = conta;
        }
        anterior = Nvalores;
    }

    cout << ponto << endl;

}