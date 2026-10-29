// Ejercicio 12: Busqueda de estudiantes
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

const int N = 10;

int BusquedaSecuencial(string arr[], int n, string x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    string nombres[N];
    string nombre;
    char opcion;

    for (int i = 0; i < N; i++) {
        cout << "Nombre del estudiante " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }

    do {
        cout << "Nombre a buscar: ";
        getline(cin, nombre);

        int pos = BusquedaSecuencial(nombres, N, nombre);
        if (pos != -1) {
            cout << nombre << " se encuentra en la posicion " << pos << endl;
        } else {
            cout << nombre << " no se encontro" << endl;
        }

        cout << "Desea buscar otro nombre? (s/n): ";
        cin >> opcion;
        cin.ignore(1000, '\n');
    } while (opcion == 's' || opcion == 'S');

    system("pause");
    return 0;
}
