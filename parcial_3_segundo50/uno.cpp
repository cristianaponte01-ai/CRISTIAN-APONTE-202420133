
#include <iostream>
using namespace std;

void wordCounterAndDifferentiator() 
{
      char phrase[200];
    cout << "Ingrese una frase: ";
    cin.getline(phrase, 200);

    char letters[50][50]; 
    int counter = 0;
    int i = 0, j = 0;

    while (phrase[i] != '\0') 
    {
        if (phrase[i] != ' ') 
        {
            letters[counter][j] = phrase[i];
            j++;
        } 
        else if (j > 0) 
        {
            letters[counter][j] = '\0';
            counter++;
            j = 0;
        }
        i++;
    }
    if (j > 0) 
    {
        letters[counter][j] = '\0';
        counter++;
    }
    int longestWord = 0;
    int maxLen = 0;
    for (int k = 0; k < counter; k++) 
    {
        int largue = 0;
        while (letters[k][longestWord] != '\0') 
        {
            longestWord++;
        }
        if (longestWord > maxLen) 
        {
            maxLen = largue;
            longestWord = k;
        }
    }

    cout << "Cantidad de palabras: " << counter << endl;
    cout << "Palabra mas larga: " << letters[longestWord] << endl;
}

int main() 
{
    wordCounterAndDifferentiator();
    return 0;
}