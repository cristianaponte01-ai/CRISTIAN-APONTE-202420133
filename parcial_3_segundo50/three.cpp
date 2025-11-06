
#include <iostream>
using namespace std;

void vehicleFineAnalyzer() 
{
    string plate[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    string city[6]  = {"Tunja", "Bogota", "Tunja", "Medellin", "Cali", "Tunja"};
    float fine[6]   = {250000, 180000, 300000, 450000, 250000, 120000};

    string searchedCity;
    cout << "La ciudad que quiere buscar es: ";
    cin >> searchedCity;

    float totalFines = 0;
    bool found = false;

    for (int i = 0; i < 6; i++) 
    {
        if (city[i] == searchedCity) 
        {
            cout << "Placa: " << plate[i] << ", Multa: " << fine[i] << endl;
            totalFines += fine[i];
            found = true;
        }
    }

    if (found) 
    {
        cout << "Las multas en " << searchedCity << " son: " << totalFines << endl;
    } 
    else 
    {
        cout << "No se encontraron multas en " << searchedCity << endl;
    }
}

int main()
{
    vehicleFineAnalyzer();
    return 0;
}

