#include <iostream>

using namespace std;

int main(){
    int N, verifica, maior = 0;

    cin >> N;

    int torre[N][N], linha[N], coluna[N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> torre[i][j];
        }
        linha[i] = 0;
        coluna[i] = 0;
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            linha[i] += torre[i][j];
            coluna[i] += torre[j][i];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
           
           verifica = (linha[i] + coluna[j]) - (2 * torre[i][j]);
           
           if(verifica > maior){
               maior = verifica;
           }
        }
    }

    cout << maior << endl;


}