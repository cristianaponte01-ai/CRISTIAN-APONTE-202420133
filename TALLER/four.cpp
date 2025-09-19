#include <iostream>
using namespace std;

void countDescending(int number) 
{
    while (number >= 0) 
    {
        cout << number << " ";
        number--;
    }
    cout << endl;
}

void countAscending(int number) 
{
    int i = 0;
    while (i <= number) 
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

int main() 
{
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;

    cout << "Conteo descendente:" << endl;
    countDescending(num);

    cout << "Conteo ascendente:" << endl;
    countAscending(num);
    return 0;
}