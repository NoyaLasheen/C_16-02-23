#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter your age: ");
    scanf("%d",&num);
    num >= 18 ? printf("\nEligible to vote\n") : printf("\nNot eligible to vote\n");

    return 0;
}
