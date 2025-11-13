#include <iostream>
using namespace std;

void run() 
{
    const int max = 100;
    const int maxName = 30;
    char name[max][maxName];
    int number[max];
    int n = 0;
    int option;

    while (true) 
    {
        cout << "--- MENU DE VENTAS ---" << endl;
        cout << "1. Registrar o reiniciar ventas" << endl;
        cout << "2. Mostrar todas las ventas" << endl;
        cout << "3. Modificar una venta" << endl;
        cout << "4. Buscar una venta" << endl;
        cout << "5. Mostrar ventas dentro de un rango de precios" << endl;
        cout << "6. Calcular total de ventas" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> option;

        if (option == 1) 
        {
            cout << "¿Cuantas ventas desea registrar? ";
            cin >> n;

            for (int i = 0; i < n; i++) 
            {
                cout << "Nombre de la venta n°" << i + 1 << ": ";
                cin >> name[i];
                cout << "Valor de " << name[i] << ": $";
                cin >> number[i];
            }
        }

        else if (option == 2) 
        {
            if (n == 0) 
            {
                cout << "No hay ventas registradas";
            } 
            else 
            {
                cout << "Lista de ventas:";
                for (int i = 0; i < n; i++) 
                {
                    cout << "Venta: " << name[i] << "  ---> Valor: $" << number[i] << endl;
                }
            }
        }

        else if (option == 3) 
        {
            if (n == 0) 
            {
                cout << "No hay ventas registradas";
            } 
            else 
            {
                char search[maxName];
                cout << "Ingrese el nombre de la venta a modificar: ";
                cin >> search;

                bool found = false;
                for (int i = 0; i < n; i++) 
                {
                    int j = 0;
                    bool equal = true;
                    while (name[i][j] != '\0' || search[j] != '\0') 
                    {
                        if (name[i][j] != search[j]) 
                        {
                            equal = false;
                            break;
                        }
                        j++;
                    }

                    if (equal) 
                    {
                        cout << "Valor actual: " << number[i] << endl;
                        cout << "Nuevo valor: ";
                        cin >> number[i];
                        cout << "Venta modificada correctamente";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "No se encontro la venta";
            }
        }

        else if (option == 4) 
        {
            if (n == 0) 
            {
                cout << "No hay ventas registradas";
            } 
            else 
            {
                char search[maxName];
                cout << "Ingrese el nombre de la venta a buscar: ";
                cin >> search;

                bool found = false;
                for (int i = 0; i < n; i++) 
                {
                    int j = 0;
                    bool equal = true;
                    while (name[i][j] != '\0' || search[j] != '\0') 
                    {
                        if (name[i][j] != search[j]) 
                        {
                            equal = false;
                            break;
                        }
                        j++;
                    }

                    if (equal) 
                    {
                        cout << "Venta encontrada en la posicion " << i << " ---> Valor: " << number[i] << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "No se encontro la venta";
            }
        }

        else if (option == 5) 
        {
            if (n == 0) 
            {
                cout << "No hay ventas registradas";
            } 
            else 
            {
                int min, max;
                cout << "Ingrese el valor minimo: ";
                cin >> min;
                cout << "Ingrese el valor maximo: ";
                cin >> max;

                bool thereIs = false;
                cout << "Ventas en el rango [" << min << ", " << max << "]:" << endl;
                for (int i = 0; i < n; i++) 
                {
                    if (number[i] >= min && number[i] <= max) 
                    {
                        cout << "Venta: " << name[i] << " -> Valor: " << number[i] << endl;
                        thereIs = true;
                    }
                }
                if (!thereIs) cout << "No hay ventas en ese rango";
            }
        }

        else if (option == 6) 
        {
            if (n == 0) 
            {
                cout << "No hay ventas registradas";
            } 
            else 
            {
                int total = 0;
                for (int i = 0; i < n; i++) total += number[i];
                cout << "El total de ventas es: " << total << endl;
            }
        }

        else if (option == 7) 
        {
            cout << "Saliendo del programa...";
            break;
        }

        else 
        {
            cout << "Opcion no valida";
        }
    }
}

int main() 
{
    run();
    return 0;
}