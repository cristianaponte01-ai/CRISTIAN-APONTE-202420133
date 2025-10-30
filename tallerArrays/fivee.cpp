#include <iostream>
using namespace std;

void showProducts() 
{
    string products[3] = {"Pan", "Leche", "Queso"};
    float prices[3] = {1500, 3200, 4800};

    cout << "Lista de productos, cada una con su precio: " << endl;

    for (int i = 0; i < 3; i++) 
    {
        cout << products[i] << " - $" << prices[i] << endl;
    }
}

int main() 
{
    showProducts();
    return 0;
}