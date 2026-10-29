// Ejercicio 1: Suma de arreglos separando indices pares e impares
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

void LeerArreglo(int arr[], int n, char nombre) {
    for (int i = 0; i < n; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> arr[i];
    }
}

void MostrarArreglo(int arr[], int n, char nombre) {
    cout << nombre << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[MAX], b[MAX], c[MAX], d[MAX];
    int n, nc = 0, nd = 0;
    do {
        cout << "Ingrese el tamano de los arreglos: ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    cout << "Arreglo a:" << endl;
    LeerArreglo(a, n, 'a');
    cout << "Arreglo b:" << endl;
    LeerArreglo(b, n, 'b');

    for (int i = 0; i < n; i++) {
        int suma = a[i] + b[i];
        if (i % 2 == 0) {
            c[nc] = suma;
            nc++;
        } else {
            d[nd] = suma;
            nd++;
        }
    }

    MostrarArreglo(a, n, 'a');
    MostrarArreglo(b, n, 'b');
    MostrarArreglo(c, nc, 'c');
    MostrarArreglo(d, nd, 'd');

    system("pause");
    return 0;
}
