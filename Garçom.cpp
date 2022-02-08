#include <iostream>

using namespace std;

int main(){
    int N, L, C, Cquebrados = 0;

    cin >> N;

    while (N--){
        cin >> L >> C; 
        if(L > C){
           Cquebrados += C;
        }
      
    }
    cout << Cquebrados << endl;
}