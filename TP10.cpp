#include <bits/stdc++.h>
using namespace std;

void encontrarNumeros(const string& cadena, vector<int>& numeros) {
    int contador = 0;
    for (char c : cadena) {
        if (c == '*') {
            numeros.push_back(contador);
            contador = 0;
        } else {
            contador++;
        }
    }
    // Añadir el último contador ya que no hay asterisco después
    numeros.push_back(contador);
}

int main() {
    string cadena;
    cout << "Ingrese la cadena: ";
    getline(cin, cadena);

    vector<int> numeros;
    encontrarNumeros(cadena, numeros);

    cout << "Los numeros encontrados son:" << endl;
    for (int num : numeros) {
        cout << num << endl;
    }

    return 0;
}