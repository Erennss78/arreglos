// Ejercicio 2: Posicion y valor del mayor elemento
#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX = 100;

int PosicionMayor(int arr[], int n) {
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[pos]) {
            pos = i;
        }
    }
    return pos;
}

int main() {
    int a[MAX];
    int n;
    do {
        cout << "Ingrese la cantidad de numeros: ";
        cin >> n;
    } while (n <= 0 || n > MAX);

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    int pos = PosicionMayor(a, n);
    cout << "Posicion: " << pos << endl;
    cout << "Valor: " << a[pos] << endl;

    system("pause");
    return 0;
}
