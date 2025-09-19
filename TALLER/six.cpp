#include <iostream>
using namespace std;

int greaterOfThree(int a, int b, int c) 
{
    int greater = a;  

    if (b > greater) 
    {
        greater = b;
    }
    if (c > greater) 
    {
        greater = c;
    }

    return greater;
}

int main() 
{
    int num1, num2, num3;
    cout << "Ingresa tres numeros enteros: ";
    cin >> num1 >> num2 >> num3;
    cout << "El mayor es: " << greaterOfThree(num1, num2, num3) << endl;
    return 0;
}