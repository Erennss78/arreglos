// Ejercicio 13: Busqueda binaria
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

// Requiere el arreglo ordenado; descarta la mitad en cada paso
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

int main() {
    int a[MAX];
    int n, x;
    do {
        cout << "Ingrese la cantidad de elementos: ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    Burbuja(a, n);
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Numero a buscar: ";
    cin >> x;

    int pos = BusquedaBinaria(a, n, x);
    if (pos != -1) {
        cout << "El numero " << x << " se encuentra en la posicion " << pos << endl;
    } else {
        cout << "El numero " << x << " no se encuentra en el arreglo" << endl;
    }

    system("pause");
    return 0;
}
