#include <iostream>
using namespace std;

void printTurn(int start, int end) 
{
    if (start > end) 
    {
        cout << "Error: el turno inicial no puede ser mayor que el final" << endl;
    } 
    else 
    {
        cout << "La máquina trabajó en los turnos: ";
        while (start <= end) 
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}


int main() 
{
    int start, end;
    cout << "Ingrese el turno de inicio: ";
    cin >> start;
    cout << "Ingrese el turno final: ";
    cin >> end;

    printTurn(start, end);
    
    return 0;
}