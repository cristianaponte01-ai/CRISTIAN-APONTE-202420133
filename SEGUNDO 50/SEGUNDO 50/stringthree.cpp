#include <iostream>
using namespace std;

void duply()
{
    string text = "lo que sea";
    string result = "";
    for (int i = 0; i < text.size(); i++)
    {
        char letter = text[i];
        if (letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
        {
            result += letter;
        }
        cout << result << endl;
    }
}

int main(){

    duply();
    
return 0;
}