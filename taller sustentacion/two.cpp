#include <iostream>
using namespace std;

void showTable(int number, fecha) 
{
    cout << "Hasta que fecha lo desea: ";
    cin >> fecha;
    
    for (int i = 1; i <= fecha; ++i) 
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {

    int n, fecha;
    cout << "Hasta que fecha lo desea: ";
    cin >> fecha;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> n;
    showTable(n);
    return 0;
}