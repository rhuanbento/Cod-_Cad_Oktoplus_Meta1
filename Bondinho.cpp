#include <iostream>

using namespace std;

int main(){
    int A, M, resultado;

    cin >> A >> M;

    resultado = A + M;

    if(resultado <= 50){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}

