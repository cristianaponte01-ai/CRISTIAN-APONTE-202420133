#include <iostream>
using namespace std;

string classifyNumber(int number) 
{
    if (number > 0) 
    return "Positivo";

    else if (number < 0) 
    return "Negativo";

    else return 
    "Cero";
}

int main() 
{
    int n;
    cout << "Ingresa un numero entero: ";
    cin >> n;
    cout << classifyNumber (n) << endl;
    return 0;
}