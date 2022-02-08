#include <iostream>

using namespace std;

int main(){
    int N, A, acesso = 0, dia = 1, i = 1;

    cin >> N;

    while(i <= N){
        cin >> A;
        acesso += A;
        if(acesso < 1000000){
            dia ++;
        }
        i++;
    }

    cout << dia << endl;
}