#include <iostream>

using namespace std;

int main(){
    float A, B, media;

    cin >> A >> B;

    media = (A + B)/2;

    if(media >= 7){
        cout << "Aprovado" << endl;
    }
    if(media < 7 and media > 4){
        cout << "Recuperacao" << endl;
    }
    if(media < 4){
        cout << "Reprovado" << endl;
    }
}