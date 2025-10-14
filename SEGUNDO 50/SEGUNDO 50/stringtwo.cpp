#include <iostream>
using namespace std;

string remplaceSpace(string text) 
{
    for (int i = 0; i < text.size(); i++) 
    {
        if (text[i] == ' ') 
        { 
            text[i] = '-';
        }
    }
    return text;
}

int main() 
{
    string original = "Vamo mis amores";

    string resultado = remplaceSpace(original);

    cout << "Texto original: " << original << endl;
    cout << "Texto modificado: " << resultado << endl;

    return 0;
}