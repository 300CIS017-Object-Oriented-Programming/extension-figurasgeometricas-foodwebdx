//
// Created by santi on 11/10/2022.
//

#include "Triangulo.h"

Triangulo::Triangulo() {
    base = 0;
    altura = 0;
    lado1 = 0;
    lado2 = 0;
    lado3 = 0;
    nombreFigura = "Triangulo";
}

Triangulo::Triangulo(int base, int altura, int lado1, int lado2, int lado3) {
    this->base = base;
    this->altura = altura;
    this->lado1 = lado1;
    this ->lado2 = lado2;
    this->lado3 = lado3;

}

void Triangulo::dibujarFigura() {
    cout << nombreFigura;
    int lineas = 5;
    int i;
    for (i = 1; i <= lineas; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            cout << "*";

        }
        cout << "\n";
    }
}

float Triangulo::calcularArea() {
    area = (base*altura)/2;
    return area;
}

float Triangulo::calcularPerimetro() {
    perimetro =(lado1+lado2+lado3);
    return perimetro;
}
