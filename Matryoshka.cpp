#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, ordI[100002], x = 0, quant = 0;
    cin >> N;
    
    int ordF[N], pegos[N];

    for(int i = 0; i < N; i++){
        cin >> ordI[i];
        ordF[i] = ordI[i];
    }

    sort(ordF, ordF+N);

        for(int i = 0; i < N; i++){
            if(ordF[i] != ordI[i]){
                quant++;
                
                pegos[x] = ordI[i];
                x++;
            }
        }

    cout << quant << endl;

    sort(pegos, pegos+x);

    for(int i = 0; i < x; i++){
        cout << pegos[i] << " ";
    }
}