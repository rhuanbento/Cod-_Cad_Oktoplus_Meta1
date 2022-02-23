#include <iostream>

using namespace std;

int main(){
    string r, n, m;

    cin >> r;

    for(int i = 0; i < r.size(); i++){
        if(r[i] == 'a' or r[i] == 'e' or r[i] == 'i'){
            n += r[i];
        }
        if(r[i] == 'o' or r[i] == 'u'){
            n += r[i];
        }
    }

     for(int i = r.size()-1; i >= 0; i--){
        if(r[i] == 'a' or r[i] == 'e' or r[i] == 'i'){
            m += r[i];
        }
        if(r[i] == 'o' or r[i] == 'u'){
            m += r[i];
        }
    }

    if(n == m){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
}