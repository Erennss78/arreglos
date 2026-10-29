// Ejercicio 3: Buscar un numero en el arreglo
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

bool Buscar(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    int a[MAX];
    int n, x;
    do {
        cout << "Ingrese la cantidad de numeros: ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Numero a buscar: ";
    cin >> x;

    if (Buscar(a, n, x)) {
        cout << "Respuesta: el numero se encuentra en el arreglo" << endl;
    } else {
        cout << "Respuesta: el numero no se encuentra en el arreglo" << endl;
    }

    system("pause");
    return 0;
}
