// Ejercicio 8: Ordenamiento de calificaciones
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 10;

void Burbuja(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                double aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

void MostrarArreglo(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    double original[N], ordenado[N];

    for (int i = 0; i < N; i++) {
        cout << "Calificacion " << i + 1 << ": ";
        cin >> original[i];
        ordenado[i] = original[i];
    }

    Burbuja(ordenado, N);

    cout << "Arreglo original: ";
    MostrarArreglo(original, N);
    cout << "Arreglo ordenado: ";
    MostrarArreglo(ordenado, N);
    cout << "Calificacion minima: " << ordenado[0] << endl;
    cout << "Calificacion maxima: " << ordenado[N - 1] << endl;

    system("pause");
    return 0;
}
