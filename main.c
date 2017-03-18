#include <stdio.h>
#include "ComplexNumber.h"

int main(){
    ComplexNumber* c = createComplexNumber(3,4);
    ComplexNumber* c1 = createComplexNumber(4,5);
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