#include <iostream>

using namespace std;

int main (){
    int X, i = 1;

    cin >> X;

    while(i <= X){
        if(X%i == 0){
            cout << i << " " ;
        }
        i++;
    }

}