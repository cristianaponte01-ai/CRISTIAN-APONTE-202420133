#include <iostream>
using namespace std;

double impar(double num) {
    if ((int)num % 2 != 0) {
        cout << "Numero impar: " << num << endl;
        return num;
    } else {
        cout << "El numero es par" << endl;
        return 0;
    }
}

int main() {
    double numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    impar(numero);

    return 0;
}

