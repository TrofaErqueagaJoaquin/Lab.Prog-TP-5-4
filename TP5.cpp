#include <bits/stdc++.h>
using namespace std;
string Japones(string f);

int main() {
    string frase;
    
    cout << "Escribe la frase a traducir" << endl;
    getline(cin, frase);
    cout << "Así queda la frase en japones:  Konnichiwa "<< Japones(frase) <<"-san "<< endl;

    return 0;
}

    string Japones(string f) {

    string c;

    for (int i = 0; i < f.size(); i++) {
        
        
        if (tolower(f[i]) != 'a' && tolower(f[i]) != 'e' &&
            tolower(f[i]) != 'i' && tolower(f[i]) != 'o' &&
            tolower(f[i]) != 'u') 
        {c += f[i];
        if ((f[i+1]) != 'a' && (f[i+1]) != 'e' &&
            (f[i+1]) != 'i' && (f[i+1]) != 'o' &&
            (f[i+1]) != 'u') 
        {
            c += 'u';
        }
        }
        else { c += f[i] ; }
        
    }

    return c;
}