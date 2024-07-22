#include <iostream>
#include <cmath>

using namespace std;

double calcularAreaCirculo(double radio) {
    return (radio * radio) * M_PI;
}

double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double calcularAreaCuadrado(double lado) {
    return lado * lado;
}

int main() {
    int opcion;
    cout << "Seleccione la figura para calcular el area:\n";
    cout << "1. Circulo\n";
    cout << "2. Triangulo\n";
    cout << "3. Cuadrado\n";
    cout << "Ingrese su opcion (1-3): ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            double area = calcularAreaCirculo(radio);
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            double area = calcularAreaTriangulo(base, altura);
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        case 3: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            double area = calcularAreaCuadrado(lado);
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        default:
            cout << "Opcion no valida. Por favor, seleccione 1, 2 o 3." << endl;
            break;
    }

    return 0;
}

