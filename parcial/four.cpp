#include <iostream>
using namespace std;

bool isValidAmount(int amount) 
{
    return amount % 50 == 0;
}

void dispenseBills(int amount) 
{
    int bill200 = 0, bill100 = 0, bill50 = 0;

    while (amount >= 200) 
    {
        amount -= 200;
        bill200++;
    }
    while (amount >= 100) 
    {
        amount -= 100;
        bill100++;
    }
    while (amount >= 50) 
    {
        amount -= 50;
        bill50++;
    }
    cout << bill200 << " bills of 200" << endl;
    cout << bill100 << " bills of 100" << endl;
    cout << bill50  << " bills of 50"  << endl;
}

int main() 
{
    int amount;

    cout << "Ingrese el monto a retirar: ";
    cin >> amount;

    if (isValidAmount(amount)) 
    {
        dispenseBills(amount);
    } 
    else 
    {
        cout << "Billete inválido, debe ser múltiplo de 50" << endl;
    }

    return 0;
}