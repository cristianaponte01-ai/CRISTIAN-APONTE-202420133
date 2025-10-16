#include <iostream>
using namespace std;


bool isLengthValid(string password) 
{
    return password.length() >= 8;
}

bool hasSpecialCharacter(string password)
{
    
    int contador = 0;
    for (int i = 0; i < password.size(); i++)
    {
        char character = password[i];
        if (character >= '!' && character <= '/')
        {
            contador ++;
        } 

    }
    if (contador >= 3)
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

bool validateMay (string mayus) 
{
    bool containsMayus = false;
    for (int i = 0; i < mayus.size(); i++)
    {
        char character = mayus[i];
        if (character >= 'A' && character <= 'Z')
        {
            containsMayus = true;
        } 
        
    }
    return containsMayus;
}

void validatePassword () 
{
    string password;
    cout << "Ingrese una contraseña" << endl;
    cin >> password;

    bool lengthValid = isLengthValid(password);
 
    bool hasSpecialChars = hasSpecialCharacter(password);
    bool containsMayus = validateMay(password);

    if (hasSpecialCharacter && containsMayus && lengthValid)
    {
        cout << "contraseña valida" << endl;
        
    } else 
    {
        cout << "contraseña invalida" << endl;
    }
    
}

int main()
{
    validatePassword();
    return 0;
}