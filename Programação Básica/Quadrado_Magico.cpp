#include <iostream>

using namespace std;

int main (){
    int N, soma = 0, verifica = 0;

    cin >> N;

    int matriz[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }

    for(int j = 0; j < N; j++){
        soma += matriz[0][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            verifica += matriz[i][j];
        }
        if(verifica != soma){
            cout << "-1" << endl;
            return 0;
        }
        verifica = 0;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            verifica += matriz[j][i];
        }
        if(verifica != soma){
            cout << "-1" << endl;
            return 0;
        }
        verifica = 0;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j){
                verifica += matriz[i][j];
            }
        }
    }
    if(verifica != soma){
        cout << "-1" << endl;
        return 0;
    }
    verifica = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((i+j) == (N-1)){
                verifica += matriz[i][j];
            }
        }
    }
    if(verifica != soma){
        cout << "-1" << endl;
        return 0;
    }
    verifica = 0;

    cout << soma << endl;
	
	return 0;

}