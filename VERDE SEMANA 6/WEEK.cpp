#include <iostream>
using namespace std;

void week (int day) {
    switch (day) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "ERROR (debe ser del 1 al 7)" << endl;
            break;
    }
}

int main() {
    int num;
    cout << "Ingrese un numero del 1 al 7 para ver que dia de la semana es: ";
    cin >> num;
    week(num);

    return 0;
}