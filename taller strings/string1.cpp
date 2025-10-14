#include <iostream>
using namespace std;

void show() 
{
    string word, result = "";
    cout << "Escribe una palabra: ";
    cin >> word;

    for (char letter : word) 
    {
        if (!(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')) 
        {
            result += letter;
        }
    }
    cout << "consonantes= " << result << endl;
}

int main() 
{
    show();
    return 0;
}