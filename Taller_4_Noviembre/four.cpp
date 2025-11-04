#include <iostream>
using namespace std;


void browsePricesAndGiveAnAverage()
{
float price[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
float sum = 0;
float highest = price[0];
float minimum = price[0];

cout << "Los precios son: " << endl;

for (int i = 0; i < 6; i++)
{
    cout << "Precio " << i + 1 << ": $" << price[i] << endl;
    sum += price[i];

    if (price[i] > highest) 
        {
            highest = price[i];
        }

    if (price[i] < minimum) 
        {
            minimum = price[i];
        }
    }

    cout << "La suma total de los precios es: $" << sum << endl;
    cout << "Precio mas alto: $" << highest << endl;
    cout << "Precio mas bajo: $" << minimum << endl;


}

int main() 
{
    browsePricesAndGiveAnAverage();
    return 0;
}
