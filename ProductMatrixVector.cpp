#include <iostream>
#include "math_tools.h"
#include "display_tools.h"


int main(void){
    Vector example_vector,copy_vector;
    zeroes(example_vector,4);

    example_vector.at(0)=3;
    example_vector.at(1)=6;
    example_vector.at(2)=9;
    example_vector.at(3)=12;

copyVector(example_vector,copy_vector);

showVector(copy_vector);

}