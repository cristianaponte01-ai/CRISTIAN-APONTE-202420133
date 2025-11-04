#include <iostream>
using namespace std;

void showAdultWhoIsOlder() 
{
    string name[5] = {"Carlos", "Marta", "Lucia", "Tomas", "Sofia"};
    int age[5] = {20, 16, 22, 15, 19};
    int amount = 5;

    cout << "Personas mayores o iguales a 18 años: ";
    for (int i = 0; i < amount; i++) 
    {
        if (age[i] >= 18) 
        {
            cout << name[i] << " tiene " << age[i] << " años." << endl;
        }
    }
}

int main() 
{
    showAdultWhoIsOlder();
    return 0;
}