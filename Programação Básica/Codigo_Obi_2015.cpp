#include <iostream>
 
using namespace std;

int main(){
    int N, c = 0, seq[10002];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> seq[i];
    }
    for(int j = 0; j< N - 2; j++){
        if(seq[j] == 1 && seq[j+1] == 0 && seq[j+2] == 0){
            c++;
        }
        else{
            continue;
        }
    }
    cout << c << endl;
}