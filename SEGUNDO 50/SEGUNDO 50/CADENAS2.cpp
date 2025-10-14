#include <iostream>
using namespace std;

void forWithString()
{
    string example = "lo que sea";

    for (int i = 0; i < example.size(); i++)
    {
        char contadorVocales = example[i];
        int contador = 1;
        if (contadorVocales == 'a' ||contadorVocales == 'e' ||contadorVocales == 'i' ||contadorVocales == 'o'|| contadorVocales == 'u')
        {
        cout << "se encontro una vocal" << contador++ <<endl;
        }
    }
}
int main() 
{
    forWithString();

    return 0;
}