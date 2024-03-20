#include <bits/stdc++.h>
using namespace std;

int ContarValorLetras(string f);
int main() {
    string frase;
    cout << "Ingrese una frase inspiradora: ";
    getline(cin, frase);
    cout <<"el valor del mensaje dado es:"<<ContarValorLetras(frase)<<endl;
    return 0;
}

 int ContarValorLetras(string f) {
    int contador  = 0;
    
    for (int i = 0; i < f.size(); i++) {
    	
        if ( f[i] == 'a' || f[i] == 'e' )
		contador++;
		if ( f[i] == 'o' || f[i] == 's' )
		contador+=2;
		if ( f[i] == 'd' || f[i] == 'i'|| f[i] == 'n'|| f[i] == 'r' )
		contador+=3;
		if ( f[i] == 'c' || f[i] == 'l' || f[i] == 't' || f[i] == 'u' )
		contador+=4;
		if ( f[i] == 'm' || f[i] == 'p' )
		contador+=5;
		if ( f[i] == 'b' || f[i] == 'f' || f[i] == 'g' || f[i] == 'h' || f[i] == 'j' || f[i] == 'q' || f[i] == 'v' || f[i] == 'x' || f[i] == 'y' || f[i] == 'z' )
		contador+=6;
		if ( f[i] == 'k' || f[i] == 'w' )
		contador+=7;
		
    }
    return contador;
}