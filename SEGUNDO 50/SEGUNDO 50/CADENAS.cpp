#include <iostream>
using namespace std;

void forWithString()
{
    string example = "lo que sea";

    for (int i = 0; i < example.size(); i++)
    {
        char textCharacter = example[i];
        cout << "position " << i << " ^ " << textCharacter << endl;
    }
}

int main() 
{
    forWithString();

    return 0;
}