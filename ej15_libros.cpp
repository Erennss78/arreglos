// Ejercicio 15: Ordenamiento y busqueda de libros
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 15;

void Burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int BusquedaBinaria(int arr[], int n, int x) {
    int inf = 0, sup = n - 1;
    while (inf <= sup) {
        int medio = (inf + sup) / 2;
        if (arr[medio] == x) {
            return medio;
        } else if (arr[medio] < x) {
            inf = medio + 1;
        } else {
            sup = medio - 1;
        }
    }
    return -1;
}

int main() {
    int codigos[N];
    int codigo;

    for (int i = 0; i < N; i++) {
        cout << "Codigo del libro " << i + 1 << ": ";
        cin >> codigos[i];
    }

    Burbuja(codigos, N);
    cout << "Codigos ordenados: ";
    for (int i = 0; i < N; i++) {
        cout << codigos[i] << " ";
    }
    cout << endl;

    cout << "Codigo a buscar: ";
    cin >> codigo;

    int pos = BusquedaBinaria(codigos, N, codigo);
    if (pos != -1) {
        cout << "El libro " << codigo << " esta en la posicion " << pos << endl;
    } else {
        cout << "El libro " << codigo << " no esta registrado" << endl;
    }

    system("pause");
    return 0;
}
