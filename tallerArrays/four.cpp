#include <iostream>
using namespace std;

void pairCounter() 
{
    int values[8] = {2, 5, 7, 8, 10, 13, 16, 19};
    int counter = 0;

    for (int i = 0; i < 8; i++) 
    {
        if (values[i] % 2 == 0) 
        {
            counter++;
        }
    }

    cout << "Los numeros pares son: " << counter << endl;
}

int main() 
{
    pairCounter();
    return 0;
}