# swapping 2 numbers

#include <stdio.h>

void main()
{
    int a,b;
    printf("\nenter first number\n");
    scanf("%d",&a);
    printf("\nenter second number\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping:\n");
    printf("\nfirst number after swap\n");
    printf("%d",a);
    printf("\nsecond number after swap\n");
    printf("%d",b);
} 
