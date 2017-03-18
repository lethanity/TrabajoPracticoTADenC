/*
    Description: C file that contains the functions related to the ComplexNumber ADT.
    ComplexNumber manages all it's memory.
 */

#include <stdlib.h>
#include <math.h>
#include "ComplexNumber.h"

/*
    Function: createComplexNumber.
    Description: allocates memory for a ComplexNumber and all it's component.
    Returns: ComplexNumber pointer.
 */

ComplexNumber* createComplexNumber(int aReal, int aImaginary){
    ComplexNumber* c = malloc(sizeof(ComplexNumber));
    c->real = aReal;
    c->imaginary = aImaginary;
    return c;
}

/*
    Function: destroyComplexNumber.
    Description: frees all allocated memory related to ComplexNumber.
    Returns: -.
 */

void destroyComplexNumber(ComplexNumber* c){
    free(c->real);
    free(c->imaginary);
    free(c);
}

/*
    Function: sum.
    Description: calculates the sum of two ComplexNumbers.
    Returns: ComplexNumber pointer.
 */

ComplexNumber* sum(ComplexNumber* c1, ComplexNumber* c2){
    return createComplexNumber(c1 -> real + c2 -> real,c1 -> imaginary + c2 -> imaginary);
};

/*
    Function: product.
    Description: calculates the product of two ComplexNumbers.
    Returns: ComplexNumber pointer.
 */

ComplexNumber* product(ComplexNumber* c1, ComplexNumber* c2) {
    return createComplexNumber(c1->real * c2->real - c1->imaginary * c2->imaginary,
            c1->real * c2->imaginary + c1->imaginary * c2->real);
}

/*
    Function: subtract.
    Description: calculates the subtraction of two ComplexNumbers.
    Returns: ComplexNumber pointer.
 */

ComplexNumber* subtract(ComplexNumber* c1, ComplexNumber* c2){
    createComplexNumber(c1 -> real - c2 -> real,c1 -> imaginary - c2 -> imaginary);
}

/*
    Function: absoluteValue.
    Description: calculates the absolute value a ComplexNumber.
    Returns: int.
 */

int absoluteValue(ComplexNumber* c1){
    return sqrt(pow(c1 -> real,2) + pow(c1 -> imaginary,2));
}

/*
    Function: equals.
    Description: Determines whether two ComplexNumbers are equals or not by comparing their real
        and imaginary parts.
    Returns: int: 1 if TRUE, 0 if FALSE.
 */

int equals(ComplexNumber* c1, ComplexNumber* c2){
    return (c1->real==c2->real && c1->imaginary==c2->imaginary);
}