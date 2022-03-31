#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int N;

    cin >> N;

    int fita[N];

    for (int i = 0; i < N; i++){
        cin >> fita[i];
    }
    for (int i = 0; i < N; i++){
        if (fita[i] == -1){
            fita[i] = 9;
        }
    }
    for (int i = 0; i < N; i ++){
        if (fita[i] == 0){
            for (int x = 0; x < N; x++){
                int a;
                a = 0;
                a = abs(x - i);
                if (a < fita[x]){
                    fita[x] = a;
                }
            }
        }
    }
    for (int i = 0; i < N; i++){
        cout << fita[i] << " ";
    }
}