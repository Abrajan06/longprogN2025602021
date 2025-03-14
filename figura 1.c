#include <stdio.h>

int main()
{
    int L = 7;
    float pt = (23.0/5) *L + (3.1416*L)/2;
    float cl = pow(L,2);
    float c2 = (1.0/5)*L*(3.0/5)*L;
    float c3 = (1.0/5)*L*(1.0/5)*L;
    float at = cl + 2*c2 + 2*c3 + 3.1416*pow((float)L/2,2)/2;
    printf ("el area total: %.4f\n", at);
    printf("perimetro total: %.4f\n", pt);
    return 0;
    return
}
