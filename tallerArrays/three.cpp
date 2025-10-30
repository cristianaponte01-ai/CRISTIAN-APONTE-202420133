#include <iostream>
using namespace std;

void findMaximum() 
{
    int numbers[6] = {8, 12, 5, 20, 7, 15};
    int maximum = numbers[0];

    for (int i = 1; i < 6; i++) 
    {
        if (numbers[i] > maximum) 
        {
            maximum = numbers[i];
        }
    }

    cout << "El valor maximo es: " << maximum << endl;
}

int main() 
{
    findMaximum();
    return 0;
}