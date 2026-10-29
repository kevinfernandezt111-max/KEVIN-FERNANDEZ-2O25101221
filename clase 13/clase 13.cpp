#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};
int main() {
    Personaje p;

    cout << "Ingrese nombre: ";
    cin >> p.nombre;
    cout << "Ingrese vida: ";
    cin >> p.vida;
    cout << "Ingrese ataque: ";
    cin >> p.ataque;

    ofstream archivoEscritura("personajes.txt", ios::app);
    if (archivoEscritura.is_open()) {
        archivoEscritura << p.nombre << " " << p.vida << " " << p.ataque << endl;
        archivoEscritura.close(); // Cierre del flujo
        cout << "Personaje guardado con exito.\n\n";
    } else {
        cout << "Error al abrir el archivo para escribir.\n\n";
    }

    ifstream archivoLectura("personajes.txt");
    if (archivoLectura.is_open()) {
        string linea;
        cout << "=== Lista de Personajes ===" << endl;
        while (getline(archivoLectura, linea)) {
            cout << linea << endl;
        }
        archivoLectura.close(); // Cierre del flujo
    } else {
        cout << "Error al abrir el archivo para leer." << endl;
    }
    return 0;
}
