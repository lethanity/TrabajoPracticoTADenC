#include <stdio.h>
#include "ComplexNumber.h"

int main(){

    //User input.
    printf("Input first complex:\n");
    printf("Real: ");
    int r1;
    scanf("%d",&r1);
    printf("\nImaginary: ");
    int i1;
    scanf("%d",&i1);
    printf("\nInput second complex:\n");
    printf("Real: ");
    int r2;
    scanf("%d",&r2);
    printf("\nImaginary: ");
    int i2;
    scanf("%d",&i2);
    printf("\n\n");

    //Test.
    ComplexNumber* c = createComplexNumber(r1,i1);
    ComplexNumber* c1 = createComplexNumber(r2,i2);
    ComplexNumber* s = sum(c,c1);
    ComplexNumber* p = product(c,c1);
    ComplexNumber* sub = subtract(c,c1);
    int abs = absoluteValue(c);
    int eq = equals(c,c1);

    printf("%d+(%di) + %d+(%di) = %d+(%di)\n", c->real, c->imaginary, c1->real,
           c1->imaginary, s->real, s->imaginary);
    printf("%d+(%di) - %d+(%di) = %d+(%di)\n", c->real, c->imaginary, c1->real,
           c1->imaginary, sub->real, sub->imaginary);
    printf("%d+(%di) * %d+(%di) = %d+(%di)\n", c->real, c->imaginary, c1->real,
           c1->imaginary, p->real, p->imaginary);
    printf("|%d+(%di)| = %d\n", c->real, c->imaginary, abs);
    printf("%d+(%di) equals %d+(%di) = %d\n", c->real, c->imaginary, c1->real,
           c1->imaginary, eq);

    return 0;
}