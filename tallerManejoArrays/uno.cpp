#include <iostream>
using namespace std;

void getNewSales(int titles[], int size) 
{
    cout << "Ingrese el numero de   " << size << " " << endl;
    for (int i = 0; i < size; ++i) {
        cout << " " << (i + 1) << ": ";
        cin >> titles[i];
    }
}