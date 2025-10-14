#include <iostream>
using namespace std;

void duply()
{
    string text = "lo que sea";
    string result;

    for (int i = 0; i < text.size(); i++)
    {
        char letter = text[i];
        result = letter ;
        cout << result << result <<endl;
    }
}

int main(){

    duply();
    
return 0;
}
