#include <stdlib.h>
#include "ComplexNumber.h"

ComplexNumber sum(ComplexNumber* c1, ComplexNumber* c2){
    ComplexNumber c = {c1 -> real + c2 -> real,c1 -> imaginary + c2 -> imaginary};
    return c;
};

ComplexNumber product(ComplexNumber* c1, ComplexNumber* c2) {
    ComplexNumber c = {c1->real * c2->real - c1->imaginary * c2->imaginary,
            c1->real * c2->imaginary + c1->imaginary * c2->real};
    return c;
}

ComplexNumber subtract(ComplexNumber* c1, ComplexNumber* c2){
    ComplexNumber c = {c1 -> real - c2 -> real,c1 -> imaginary - c2 -> imaginary};
    return c;
}

int absoluteValue(ComplexNumber* c1){
    return abs(c1 -> real) + abs(c1 -> imaginary);
}

int equals(ComplexNumber* c1, ComplexNumber* c2){
    return (c1->real==c2->real && c1->imaginary==c2->imaginary);
}