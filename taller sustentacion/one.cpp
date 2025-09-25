#include <iostream>
using namespace std;

int main() {
    string name;
    int age, fecha;
    double height;

    cout << "Ingresa tu nombre: ";
    cin >> name;

    cout << "Ingrese su edad: ";
    cin >> age;

    cout << "Ingresa su estatura en metros: ";
    cin >> height;

    fecha = 2025 - age;
    cout << "Su fecha de nacimiento es: ";
    cin >> fecha;

    cout << "Hola " << name << ", tienes " << age << " años y mides " << height << " metros, naciste en el ano: " << fecha << endl;
    return 0;
}