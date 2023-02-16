#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter values of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    //nested conditional statement
    a>b?(a>c ?printf("\nA is the greatest") : printf("\nC is the greatest")) : (b>c ? printf("\nB is the greatest") : printf("\nC is the greatest"));

    return 0;
}
