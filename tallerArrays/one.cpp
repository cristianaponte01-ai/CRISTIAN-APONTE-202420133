#include <iostream>
using namespace std;

void showNames() 
{
    string employees[4] = {"Ana", "Luis", "Maria", "Pedro"};

    cout << "Lista de empleados:" << endl;

    for (int i = 0; i < 4; i++) 
    {
        cout << employees[i] << endl;
    }
}

int main() 
{
    showNames();
    return 0;
}