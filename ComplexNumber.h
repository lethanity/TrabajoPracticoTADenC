#ifndef TRABAJOPRACTICOTADENC_COMPLEXNUMBER_H
#define TRABAJOPRACTICOTADENC_COMPLEXNUMBER_H

struct ComplexNumber{
    int real;
    int imaginary;
}typedef ComplexNumber;

ComplexNumber sum(ComplexNumber* c1, ComplexNumber* c2);
ComplexNumber product(ComplexNumber* c1, ComplexNumber* c2);
ComplexNumber subtract(ComplexNumber* c1, ComplexNumber* c2);
int absoluteValue(ComplexNumber* c1);
int equals(ComplexNumber* c1, ComplexNumber* c2);

#endif //TRABAJOPRACTICOTADENC_COMPLEXNUMBER_H