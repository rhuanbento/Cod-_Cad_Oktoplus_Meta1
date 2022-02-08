#include <iostream>

using namespace std;

int main(){
    int P, R;

    cin >> P >> R;

    if(P == 1 and R == 0){
        cout << "B" << endl;
    }
    if(P == 0 and R == 0){
        cout << "C" << endl;
    }
    if(P == 1 and R == 1){
        cout << "A" << endl;
    }
    if(P == 0 and R == 1){
        cout << "C" << endl;
    }

}