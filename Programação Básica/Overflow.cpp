#include <iostream>

using namespace std;

int main(){

    int N, P, Q, verifica;
    char C;

    cin >> N;
    cin >> P >> C >> Q;

    if(C == '+'){
       verifica = P + Q;
       if(verifica <= N){
           cout << "OK" << endl;
       }
       else{
           cout << "OVERFLOW" << endl;
       }
    }

    if(C == '*'){
       verifica = P * Q;
       if(verifica <= N){
           cout << "OK" << endl;
       }
       else{
           cout << "OVERFLOW" << endl;
       }
    }
}