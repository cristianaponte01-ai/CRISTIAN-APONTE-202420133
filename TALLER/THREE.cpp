#include <iostream>
using namespace std;

void showTable(int number) 
{
    for (int i = 1; i <= 10; ++i) 
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> n;
    showTable(n);
    return 0;
}