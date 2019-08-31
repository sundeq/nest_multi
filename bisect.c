#include <stdio.h>
#include <stdlib.h>

double nested_multiplication(double *poly, int n, double x);

int main(int argc, char **argv) {
    int degree = 4;
    double *poly = (double *) malloc(sizeof(double) * degree+1);
    poly[0] = -1;
    poly[1] = 5;
    poly[2] = -3;
    poly[3] = 3;
    poly[4] = 2;
    printf("eval: %f\n", nested_multiplication(poly, degree, 1.0/2));
}

/*
 * Uses nest multiplication to evaluate a polynomial P(x) on form:
 * P(x) = a(n) * x^n + * a(n-1) * x^(n-1) + ... + a(1)*x + a(0)
 * 
 * each element corresponding to some coefficient a(i).
 * args:
 *  poly: array of coefficients, poly[0] = a(0), poly[n] = a(n)
 *  n: degree of polynomial
 * return:
 *  evaluated value
 **/
double nested_multiplication(double *poly, int n, double x) {
    double k = poly[n];
    for (int i = n-1; i >= 0; i--)  {
        printf("k : %f, polyi: %f, x: %f\n", k, poly[i], x);
        k = k * x + poly[i];
    }
    return k;
}
