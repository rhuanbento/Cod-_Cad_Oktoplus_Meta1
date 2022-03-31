#include <iostream>

using namespace std;

int main(){
    int dedosB, dedosC, resultado;

    cin >> dedosB >> dedosC;

    resultado = dedosB + dedosC;

    if(resultado % 2 == 0){
        cout << "Bino" << endl;
    }
    else{
        cout << "Cino" << endl;
    }


}