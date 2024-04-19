#include <bits/stdc++.h>
using namespace std;

string InvertirTexto(string texto, int inicio, int fin);

int main() 
{
    string texto;
    int inicio, fin;

    cout << "ingrese el texto: ";
    getline(cin, texto);
    cout << "ingrese el indice de inicio: ";
    cin >> inicio;
    cout << "ingrese el indice final: ";
    cin >> fin;

    string TextoInvertido = InvertirTexto(texto, inicio, fin);

    cout << "Texto invertido: " << TextoInvertido << endl;

    return 0;
}

string InvertirTexto(string texto, int inicio, int fin) {
    if(inicio < fin) 
	{
        swap(texto[inicio], texto[fin]); //
        inicio++;
        fin--;
    }
    return texto;
}