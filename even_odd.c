#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d,&num");
    num%2==0 ? printf("\nEven\n") : printf("\nOdd\n");

    return 0;
}
