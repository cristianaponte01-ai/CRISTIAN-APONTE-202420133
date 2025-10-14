#include <iostream>
using namespace std;

void letter() 
{
    string a, b;
    cout << "Ingrese la primera palabra: ";
    cin >> a;
    cout << "Ingrese la segunda palabra: ";
    cin >> b;

    bool letterOne[26] = {false};
    bool letterTwo[26] = {false};

    for (char c : a) 
    {
        if (c >= 'A' && c <= 'Z') c = c + ('a' - 'A');
        if (c >= 'a' && c <= 'z')
            letterOne[c - 'a'] = true;
    }

    for (char c : b) 
    {
        if (c >= 'A' && c <= 'Z') c = c + ('a' - 'A');
        if (c >= 'a' && c <= 'z')
            letterTwo[c - 'a'] = true;
    }

    int equal = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (letterOne[i] && letterTwo[i])
            equal++;
    }

    cout << "Letras que tienen en comun: " << equal << endl;
}

int main() 
{
    letter();
    return 0;
}