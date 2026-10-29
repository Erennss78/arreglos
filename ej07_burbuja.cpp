// Ejercicio 7: Ordenamiento por burbuja
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

void Burbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool huboCambio = false;
        // En cada pasada el mayor restante "sube" al final
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                huboCambio = true;
            }
        }
        if (!huboCambio) break;
    }
}

void MostrarArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[MAX];
    int n;
    do {
        cout << "Ingrese la cantidad de elementos: ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Arreglo original: ";
    MostrarArreglo(a, n);
    Burbuja(a, n);
    cout << "Arreglo ordenado: ";
    MostrarArreglo(a, n);

    system("pause");
    return 0;
}
