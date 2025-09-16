#include <iostream>
using namespace std;

void showPackages(int n) {
    if (n % 2 == 0) 
    {
        for (int i = 2; i <= n; i += 2) 
        {
            cout << i << " ";
        }
    } 
    else 
    {
        for (int i = 1; i <= n; i += 2) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() 
{
    int numberPackages;
    
    cout << "Ingrese el numero de paquetes: ";
    cin >> numberPackages;

    showPackages(numberPackages);
    
    return 0;
}