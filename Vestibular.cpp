#include <iostream>

using namespace std;

int main(){
    int N, verifica = 0;
    string gabarito;
    string resposta;
    
    cin >> N;
    cin >> gabarito;
    cin >> resposta;


    for(int i = 0; i < N; i++){
        if(resposta[i] == gabarito[i]){
            verifica ++;
        }
    }
    cout << verifica << endl;
    

}