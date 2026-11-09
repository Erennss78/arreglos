// Ejercicio 16: Calificaciones por asignatura
#include <iostream>
#include <cstdlib>
using namespace std;

const int EST = 5;
const int ASIG = 3;

int main() {
    double notas[EST][ASIG];

    for (int i = 0; i < EST; i++) {
        for (int j = 0; j < ASIG; j++) {
            cout << "Estudiante " << i + 1 << ", asignatura " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    cout << "\nMatriz de calificaciones:" << endl;
    for (int i = 0; i < EST; i++) {
        for (int j = 0; j < ASIG; j++) {
            cout << notas[i][j] << "\t";
        }
        cout << endl;
    }

    int mejor = 0;
    double mejorPromedio = 0;
    cout << "\nPromedio por estudiante:" << endl;
    for (int i = 0; i < EST; i++) {
        double suma = 0;
        for (int j = 0; j < ASIG; j++) {
            suma += notas[i][j];
        }
        double promedio = suma / ASIG;
        cout << "Estudiante " << i + 1 << ": " << promedio << endl;
        if (i == 0 || promedio > mejorPromedio) {
            mejorPromedio = promedio;
            mejor = i;
        }
    }

    cout << "\nPromedio por asignatura:" << endl;
    for (int j = 0; j < ASIG; j++) {
        double suma = 0;
        for (int i = 0; i < EST; i++) {
            suma += notas[i][j];
        }
        cout << "Asignatura " << j + 1 << ": " << suma / EST << endl;
    }

    cout << "\nEstudiante con el promedio mas alto: " << mejor + 1
         << " (" << mejorPromedio << ")" << endl;

    system("pause");
    return 0;
}
