#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter values of a and b:");
    scanf("%d%d",&a,&b);
    c = a>b ? a : b;
    printf("\nThe greatest number is %d\n,c");

    return 0;
}
