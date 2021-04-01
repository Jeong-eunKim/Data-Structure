#include <stdio.h>
#include <stdlib.h>

int factorial(int n);


int main()
{
    int a,b;
    scanf("%d", &a);
    b= factorial(a);
    printf("%d", b);
    return 0;
}


int factorial(int n){
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}
