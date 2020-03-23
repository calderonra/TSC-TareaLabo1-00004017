#include <iostream>
#include "math_tools.h"
#include <stdlib.h>
#include "display_tools.h"

void mInversa(Matrix ma, Matrix &inversa)
{
    float determinante = determinant(ma);
    if (determinante == 0.0)
    {
        exit(EXIT_FAILURE);
    }
    Matrix cofact, traspuesta;
    cofactors(ma, cofact); //primero se saca la matriz de cofactores
    //como la matriz adjunta es la cofactores traspuesta hacemos esta operacion
    transpose(cofact, traspuesta);
    //ya solo queda multiplicar el 1/determinante por la adjunta

    productRealMatrix(determinante, ma, inversa);
}

int main(void)
{
    Matrix original, inversa;
    zeroes(original, 3, 3);

    original.at(0).at(0) = 9;
    original.at(0).at(1) = 2;
    original.at(0).at(2) = 3;
    //  original.at(0).at(3)=4;

    original.at(1).at(0) = 5;
    original.at(1).at(1) = 6;
    original.at(1).at(2) = 7;
    //original.at(1).at(3)=8;

    original.at(2).at(0) = 9;
    original.at(2).at(1) = 10;
    original.at(2).at(2) = 11;
    // original.at(2).at(3)=12;

    cout << "Matriz original" << endl;
    showMatrix(original);
    mInversa(original, inversa);
    cout << "Matriz invertida" << endl;
    showMatrix(inversa);

    return 0;
}
