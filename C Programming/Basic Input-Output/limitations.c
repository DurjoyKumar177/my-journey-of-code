#include <stdio.h>
int main()
{
    // Demonstrate the limitation of double precision floating point
    // in representing decimal numbers with many significant digits.
    //
    // The double type can only represent about 15 significant digits.
    // If more digits are required, consider using a library that
    // supports arbitrary precision arithmetic, such as the GNU
    // Multiple Precision Arithmetic Library (GMP).
    double a = 22.123456789123456;
    printf("%0.15lf\n", a);
    // prints 22.123456789123457
    // notice that the last digit is rounded up from 6 to 7
    return 0;
}

