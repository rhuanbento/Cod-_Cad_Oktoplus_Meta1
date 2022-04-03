#include <iostream>

using namespace std;

int main(){

    int V, S[] = {100, 50, 25, 10, 5, 1};
    int resultado = 0, M = 0;

    cin >> V;

    for(int i = 0; i < 6; i++){
        while(M == 0){
            if(V >= S[i]){
                V -= S[i];
                resultado++;
            }
            else{
                break;
            }

        }

    }

    cout << resultado << endl;

    return 0;

}