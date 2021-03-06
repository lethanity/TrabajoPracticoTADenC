/*
    Description: Header file that describes the ComplexNumber ADT.
 */

#ifndef TRABAJOPRACTICOTADENC_COMPLEXNUMBER_H
#define TRABAJOPRACTICOTADENC_COMPLEXNUMBER_H

// --- Structs ---

struct ComplexNumber{
    int real;
    int imaginary;
}typedef ComplexNumber;

// --- Function ---

ComplexNumber* createComplexNumber(int aReal, int aImaginary);
void destroyComplexNumber(ComplexNumber* c);
ComplexNumber* sum(ComplexNumber* c1, ComplexNumber* c2);
ComplexNumber* product(ComplexNumber* c1, ComplexNumber* c2);
ComplexNumber* subtract(ComplexNumber* c1, ComplexNumber* c2);
int absoluteValue(ComplexNumber* c1);
int equals(ComplexNumber* c1, ComplexNumber* c2);

#endif //TRABAJOPRACTICOTADENC_COMPLEXNUMBER_H