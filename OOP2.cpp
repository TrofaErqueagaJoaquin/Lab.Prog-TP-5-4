#include <bits/stdc++.h>
using namespace std;

class CBanana {
private:
    int Num1;
    int Num2;
    int Num3;

public:
    CBanana(int n1, int n2, int n3); // Constructor
    void SetNum1(int n1);
    void SetNum2(int n2);
    void SetNum3(int n3);
    int Max();
    int Min();
    float Promedio();
    int Par();
    int Impar();
};

CBanana::CBanana(int n1, int n2, int n3) {
    Num1 = n1;
    Num2 = n2;
    Num3 = n3;
}

void CBanana::SetNum1(int n1) {
    Num1 = n1;
}

void CBanana::SetNum2(int n2) {
    Num2 = n2;
}

void CBanana::SetNum3(int n3) {
    Num3 = n3;
}

int CBanana::Max() {
    int max = Num1;
    if (Num2 > max) {
        max = Num2;
    }
    if (Num3 > max) {
        max = Num3;
    }
    return max;
}

int CBanana::Min() {
    int min = Num1;
    if (Num2 < min) {
        min = Num2;
    }
    if (Num3 < min) {
        min = Num3;
    }
    return min;
}

float CBanana::Promedio() {
    return (Num1 + Num2 + Num3) / 3.0;
}

int CBanana::Par() {
    int par = 0;
    if (Num1 % 2 == 0) {
        par++;
    }
    if (Num2 % 2 == 0) {
        par++;
    }
    if (Num3 % 2 == 0) {
        par++;
    }
    return par;
}

int CBanana::Impar() {
    int impar = 0;
    if (Num1 % 2 != 0) {
        impar++;
    }
    if (Num2 % 2 != 0) {
        impar++;
    }
    if (Num3 % 2 != 0) {
        impar++;
    }
    return impar;
}

int main() {
    int n1 = 10;
    int n2 = 7;
    int n3 = 5;
    CBanana n(n1, n2, n3);

    int maximo = n.Max();
    int minimo = n.Min();
    float prom = n.Promedio();
    int pares = n.Par();
    int impares = n.Impar();

    cout << "La nota maxima es: " << maximo << endl;
    cout << "La nota minima es: " << minimo << endl;
    cout << "La nota Promedio es: " << prom << endl;
    cout << "Las notas pares son: " << pares << endl;
    cout << "Las notas impares son: " << impares << endl;

    return 0;
}
