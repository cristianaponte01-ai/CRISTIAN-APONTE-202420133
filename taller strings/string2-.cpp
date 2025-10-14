#include <iostream>
using namespace std;

void converter() 
{
    char letter[101], result[101];
    cout << "Ingrese una palabra sin espacios: ";
    cin >> letter;

    for (int i = 0; letter[i] != '\0'; i++) 
    {
        char c = letter[i];
        if (i % 2 == 0) 
        {
            if (c >= 'a' && c <= 'z')
                result[i] = c - ('a' - 'A');
            else
                result[i] = c;
        }
        else 
        {
            if (c >= 'A' && c <= 'Z')
                result[i] = c + ('a' - 'A');
            else
                result[i] = c;
        }
    }

    int a = 0;
    while (letter[a] != '\0') a++;
    result[a] = '\0';

    cout << "Resultado: " << result << endl;
}

int main() 
{
    converter();
    return 0;
}