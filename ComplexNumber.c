#include <stdlib.h>
#include <math.h>
#include "ComplexNumber.h"

ComplexNumber* createComplexNumber(int aReal, int aImaginary){
    ComplexNumber* c = malloc(sizeof(ComplexNumber));
    c->real = aReal;
    c->imaginary = aImaginary;
    return c;
}

void destroyComplexNumber(ComplexNumber* c){
    free(c->real);
    free(c->imaginary);
    free(c);
}

ComplexNumber* sum(ComplexNumber* c1, ComplexNumber* c2){
    return createComplexNumber(c1 -> real + c2 -> real,c1 -> imaginary + c2 -> imaginary);
};

ComplexNumber* product(ComplexNumber* c1, ComplexNumber* c2) {
    return createComplexNumber(c1->real * c2->real - c1->imaginary * c2->imaginary,
            c1->real * c2->imaginary + c1->imaginary * c2->real);
}

ComplexNumber* subtract(ComplexNumber* c1, ComplexNumber* c2){
    createComplexNumber(c1 -> real - c2 -> real,c1 -> imaginary - c2 -> imaginary);
}

int absoluteValue(ComplexNumber* c1){
    return sqrt(pow(c1 -> real,2) + pow(c1 -> imaginary,2));
}

int equals(ComplexNumber* c1, ComplexNumber* c2){
    return (c1->real==c2->real && c1->imaginary==c2->imaginary);
}