#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b;
    int sum, prod, quot, rem;
    sscanf(argv[1],"%d", &a);
    sscanf(argv[2],"%d", &b);
    sum = a + b;
    prod = a * b;
    quot = a / b;
    rem = a % b;
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d * %d = %d\n", a, b, prod);
    printf("%d / %d = %d\n", a, b, quot);
    printf("%d %% %d = %d\n", a, b, rem);
}
