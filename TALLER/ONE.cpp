#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    double height;

    cout << "Ingresa tu nombre: ";
    cin >> name;

    cout << "Ingrese su edad: ";
    cin >> age;

    cout << "Ingresa su estatura en metros: ";
    cin >> height;

    cout << "Hola " << name << ", tienes " << age << " años y mides " << height << " metros" << endl;
    return 0;
}