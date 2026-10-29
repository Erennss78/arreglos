// Ejercicio 5: Ventas semanales
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

const int DIAS = 7;

int main() {
    string nombres[DIAS] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    double ventas[DIAS];
    double total = 0;

    for (int i = 0; i < DIAS; i++) {
        cout << "Ventas del " << nombres[i] << ": ";
        cin >> ventas[i];
        total += ventas[i];
    }

    double promedio = total / DIAS;
    int diaMayor = 0, diaMenor = 0, sobrePromedio = 0;
    for (int i = 0; i < DIAS; i++) {
        if (ventas[i] > ventas[diaMayor]) diaMayor = i;
        if (ventas[i] < ventas[diaMenor]) diaMenor = i;
        if (ventas[i] > promedio) sobrePromedio++;
    }

    cout << "Total de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Dia de mayor venta: " << nombres[diaMayor] << " (" << ventas[diaMayor] << ")" << endl;
    cout << "Dia de menor venta: " << nombres[diaMenor] << " (" << ventas[diaMenor] << ")" << endl;
    cout << "Dias con ventas sobre el promedio: " << sobrePromedio << endl;

    system("pause");
    return 0;
}
