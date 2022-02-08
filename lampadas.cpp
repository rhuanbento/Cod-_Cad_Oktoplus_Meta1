#include <iostream>

using namespace std;

int main(){
  int N, A = 0, B = 0, interruptor;

  cin >> N;

  for(int i = 0; i < N; i++){
      cin >> interruptor;
      if(interruptor == 1){
            if(A == 0){
                A = 1;
            }
            else{
                A = 0;
            }
        }
        if(interruptor == 2){
            if(A == 0 and B == 0){
                A = 1;
                B = 1;
            }
            else if(A == 1 and B == 1){
                A = 0;
                B = 0;
            }
            else if(A == 0 and B == 1){
                A = 1;
                B = 0;
            }
            else{
                A = 0;
                B = 1;
            }

        }
  }

    cout << A << endl;
    cout << B << endl;
    

}