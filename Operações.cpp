#include <iostream>

using namespace std;

int main(){
	double x, y;
	char a;
    cout.precision(2);
    cout.setf(ios ::fixed);
	
	cin >> a;
	cin >> x >> y;
	
	if(a == 'M'){
		double resultado;
		resultado = x * y;
		cout << resultado << endl;
	}
	if(a == 'D'){
		double resultado;
		resultado = x / y;
		cout << resultado << endl;
	}
}