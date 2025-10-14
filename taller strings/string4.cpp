#include <iostream>
using namespace std;

void counterr() 
{
    int n, counter = 0;
    char letter[101];

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Ingrese palabras (tiene que terminar la oracion con ¨fin¨): " << endl;
    while (true) 
    {
        cin >> letter;
        if (letter[0] == 'f' && letter[1] == 'i' && letter[2] == 'n' && letter[3] == '\0')
            break;

        int longitud = 0;
        while (letter[longitud] != '\0') longitud++;

        if (longitud > n)
            counter++;
    }

    cout << "las palabras que tienen longitud mayor a " << n << ": " << counter << endl;
}

int main() 
{
    counterr();
    return 0;
}