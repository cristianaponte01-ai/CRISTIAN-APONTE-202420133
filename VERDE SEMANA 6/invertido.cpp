#include <iostream> 
using namespace std;

void contador (int num){
    int contador = 10;
    while(contador >= num){
        cout << contador << endl;
        contador--;
    }
}

int main() {
    int num1;
    cout << "Ingrese un numero ";
    cin >> num1;

    contador (num1);


    return 0;
}