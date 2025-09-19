#include <iostream>
using namespace std;

int greaterNumber(int firstNumber, int secondNumber) 
{
    if (firstNumber > secondNumber) 
    {
        return firstNumber;
    } 
    else 
    {
        return secondNumber;
    }
}

int main() 
{
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "El mayor es: " << greaterNumber(num1, num2) << endl;
    return 0;
}