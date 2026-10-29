// Ejercicio 10: Busqueda secuencial
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

// Recorre el arreglo de inicio a fin; devuelve la posicion o -1
int BusquedaSecuencial(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
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

    cout << "Numero a buscar: ";
    cin >> x;

    int pos = BusquedaSecuencial(a, n, x);
    if (pos != -1) {
        cout << "El numero " << x << " se encuentra en la posicion " << pos << endl;
    } else {
        cout << "El numero " << x << " no se encuentra en el arreglo" << endl;
    }

    system("pause");
    return 0;
}
