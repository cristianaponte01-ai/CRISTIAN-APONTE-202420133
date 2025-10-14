#include <iostream>
using namespace std;

void forWithString()
{
    string example = "otorrinonaringologo";

    for (int i = 0; i < example.size(); i++)
    {
        char contadorVocales = example[i];
        int contador = 1;
        if (contadorVocales == 'o')
        {
        cout << "Hay " << contador++ << "veces" << endl;
        }
    }
}
int main() 
{
    forWithString();

    return 0;
}