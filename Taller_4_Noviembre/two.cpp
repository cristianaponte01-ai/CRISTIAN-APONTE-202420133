#include <iostream>
using namespace std;

int findVowel(string word) {
    int v = 0;
    for(int i = 0; i < word.length(); i++) {
        char c = tolower(word[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            v++;
    }
    return v;
}

int findConsonant(string word) {
    int con = 0;
    for(int i = 0; i < word.length(); i++) {
        char c = tolower(word[i]);
        if(c >= 'a' && c <= 'z') {
            if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
                con++;
        }
    }
    return con;
}


int main() {
    string a;
    cout << "Ingrese texto: ";
    cin >> a;

    cout << "Vocales: " << findVowel(a) << endl;
    cout << "Consonantes: " << findConsonant(a) << endl;

    return 0;
}
