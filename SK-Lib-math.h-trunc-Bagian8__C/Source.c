#include <math.h>
#include <stdio.h>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main() {
    printf("trunc(+2.7) = %+.1f\n", trunc(2.7));
    printf("trunc(-2.7) = %+.1f\n", trunc(-2.7));
    printf("trunc(-0.0) = %+.1f\n", trunc(-0.0));
    printf("trunc(-Inf) = %+f\n", trunc(-INFINITY));
    _getch();
    return 0;
}