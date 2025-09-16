#include <iostream> 
using namespace std;

void contador (int num){
    cout << "Los numeros antes de " << num << "son: " << endl;
    for (int i = 0; i<=num; i++)
    {
        cout << i << endl;
    }

}

int main () {
    int number;
    cout << "Ingrese un numero: ";
    cin >> number;

    contador(number);

    return 0;
}