#include <iostream>
#include <cctype>

using namespace std;

string title(string F){
    string Verd_F;
    char f[F.size()];

    for(int i = 0; i < F.size(); i++){
        f[i] = ' ';
    }
    
    for(int i = 0; i < F.size(); i++){
        f[i] = F[i];
    }

    for(int c = 0; c < F.size(); c++){
        if(c == 0 and (int)f[c] >= 97 and (int)f[c] <= 122){
            f[c] = toupper(f[c]);
        }

        if(c > 0 and (int)f[c] >= 97 and (int)f[c] <= 122 and (int)f[c-1] == 32){
            f[c] = toupper(f[c]);
        }

        if(c > 0 and (int)f[c] >= 65 and (int)f[c] <= 90 and (int)f[c-1] != 32){
            f[c] = tolower(f[c]);
        }
    }

    for(int i = 0; i < F.size(); i++){
        Verd_F += f[i];
    }
    
    return Verd_F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}