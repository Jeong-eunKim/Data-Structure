#include <stdio.h>
#include <stdlib.h>

double slow_power(double x, int n);

int main()
{
    double a,c;
    int b;
    scanf("%lf",&a);
    scanf("%d", &b);
    c = slow_power(a,b);

    printf("%f", c);
    return 0;
}

double slow_power(double x, int n){
    int i;
    double r = 1.0;
    for(i=0;i<n;i++)
        r = r*x;

    return r;
}
