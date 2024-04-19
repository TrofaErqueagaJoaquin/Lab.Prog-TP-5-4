#include <bits/stdc++.h>
using namespace std;

int CantidadDeLatas(string hilera);
int SecuenciaMasLarga(string hilera);
int SecuenciaLargaDos(string hilera);
int Distancia(string hilera);

int main()
{
    string hilera;

    cout << "ingresar la hilera de latas (unicamente A, T, G y C): " << endl;
    getline(cin, hilera);
    cout << "cantidad de latas que hay en la hilera: " << CantidadDeLatas(hilera) << endl;
    cout << "secuencia mas larga que hay de GARBANZOS: " << SecuenciaMasLarga(hilera) << endl;
    cout << "2da secuencia mas larga que hay de GARBANZOS: " << SecuenciaLargaDos(hilera) << endl;
    cout << "la distancia mas larga de secuencias es: " << Distancia(hilera) << endl;
    return 0;
}

int CantidadDeLatas(string hilera)
{
	int Cantidad;
	Cantidad = hilera.size();
	
    return Cantidad;
}

int SecuenciaMasLarga(string hilera)
{
    int max = 0, secmax = 0, tercermax = 0;
    int contador = 0;
    
    for (int i = 0; i < hilera.size(); i++)
    {
        if (hilera[i] == 'G')
        {
            contador++;
        }
        else
        {
            if (contador >= max)
            {
                tercermax = secmax;
                secmax = max;
                max = contador;
            }
            else if (contador >= secmax)
            {
                tercermax = secmax;
                secmax = contador;
            }
            else if (contador > tercermax)
            {
                tercermax = contador;
            }
            contador = 0;
        }
    }

    return max;
}

int SecuenciaLargaDos(string hilera)
{
    int max = 0, secmax = 0;
    int contador = 0;
    
    for (int i = 0; i < hilera.size(); i++)
    {
        if (hilera[i] == 'G')
        {
            contador++;
        }
        else
        {
            if (contador >= max)
            {
                secmax = max;
                max = contador;
            }
            else if (contador > secmax && contador < max)
            {
                secmax = contador;
            }
            contador = 0;
        }
    }
    return secmax;
}

int Distancia(string hilera)
{
    int distancia = 0;
    bool primeraEncontrada = false;
    
    for (int i = 0; i < hilera.size(); i++)
    {
        if (hilera[i] == 'G')
        {
            if (primeraEncontrada)
                distancia++;
            else
                primeraEncontrada = true;
        }
    }
    return distancia;
}