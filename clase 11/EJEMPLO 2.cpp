#include <iostream>
using namespace std;
int main() {
    char car;
    for (car = ' '; car != 'a' && car != 'e' && car != 'i' && car != 'o' && car != 'u'; ) {
        cout << "Ingrese un caracter: ";
        cin >> car;
    }
    cout << "  vocal ingresada: " << car << endl;
    return 0;
}
