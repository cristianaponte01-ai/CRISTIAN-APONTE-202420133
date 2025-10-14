#include <iostream>
using namespace std;

void checker(string word) 
{
    int n = word.length();
    bool palindrome = true;
    for (int i = 0; i < n / 2; i++) 
    {
        if (word[i] != word[n - 1 - i]) 
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
        cout << word << " es un palindromo " << endl;
    else
        cout << word << " no es un palindromo " << endl;
}

int main() 
{
    string p1, p2;
    cout << "Ingrese la primera palabra: ";
    cin >> p1;
    cout << "Ingrese la segunda palabra: ";
    cin >> p2;

    checker(p1);
    checker(p2);

    return 0;
}