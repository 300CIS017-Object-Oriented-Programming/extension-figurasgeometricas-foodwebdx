//
// Created by santi on 11/10/2022.
//

#ifndef GEOMETRIA_TRIANGULO_H
#define GEOMETRIA_TRIANGULO_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

class Triangulo : public FiguraGeometrica {
private:
    int base;
    int altura;
    int lado1;
    int lado2;
    int lado3;
public:
    Triangulo();
    Triangulo(int base, int altura, int lado1, int lado2, int lado3);
    virtual ~Triangulo() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;


};


#endif //GEOMETRIA_TRIANGULO_H
