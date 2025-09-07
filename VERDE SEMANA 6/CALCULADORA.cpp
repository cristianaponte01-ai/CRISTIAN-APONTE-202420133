#include <iostream>
using namespace std;

// SUMA
void SumOfTwoValues(int valueOne, int valueTwo) 
{
    int sum = valueOne + valueTwo;
    cout << "La suma es: " << sum << endl;
}

// RESTA
void SubtractTwoValues(int valueOne, int valueTwo) 
{
    int substract = valueOne - valueTwo;
    cout << "La resta es: " << substract << endl;
}

// MULTIPLICACION
void MultiplyTwoValues(int valueOne, int valueTwo)
{
    int multiply = valueOne * valueTwo;
    cout << "La multiplicacion es: " << multiply << endl;  
}

// DIVISIoN
double divideNumbers(int valueOne, int valueTwo)
{
    if (valueTwo == 0) 
    {
        cout << "Error: No se puede dividir entre 0." << endl;
        return 0;
    }
    double result = static_cast<double>(valueOne) / valueTwo; 
    cout << "La división es: " << result << endl;
    return result;
}

void Message() {
    cout << "Finalizo" << endl;
} 


int main() {
    int num1, num2;

    // Datos usuario 
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    SumOfTwoValues(num1,num2);
    SubtractTwoValues(num1, num2);
    MultiplyTwoValues(num1, num2);
    divideNumbers(num1, num2);

    Message();

    return 0;
}
