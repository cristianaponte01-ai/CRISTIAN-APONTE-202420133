#include <iostream>
using namespace std;

void mostProducts() 
{
    string products[6] = {"manzanas", "peras", "uvas", "bananas", "mangos", "fresas"};
    int price[6] = {1500, 2300, 1800, 3100, 2700, 2600};
    int total = 0;
    int amount = 6;

    cout << "Productos y sus precios: " << endl;
    for (int i = 0; i < amount; i++) 
    {
        cout << products[i] << ": $" << price[i] << endl;
        total += price[i];
    }

    cout << "Total a pagar por todos los productos: $" << total << endl;

    cout << "Productos con precio mayor o igual a $2500: " << endl;
    for (int i = 0; i < amount; i++) 
    {
        if (price[i] >= 2500)
            cout << products[i] << ": $" << price[i] << endl;
    }
}

int main() 
{
    mostProducts();
    return 0;
}