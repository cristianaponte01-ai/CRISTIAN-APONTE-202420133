#include <iostream>
using namespace std;

void ageAndAverageAge ()
{
    int age[6] = { 18, 23, 45, 56, 58, 13};
    int sum = 0;
    int amount = 6;

    for (int i = 0; i < amount; i++)
    {
        float arrayAvalue = age[i];
        sum += age[i];
        cout << "La edad es: " << age[i] << endl;
    }
    float average = (float)sum / amount;
    cout << "El promedio de las edades es: " << average << endl;
}


int main ()
{
    ageAndAverageAge ();
    return 0;

}