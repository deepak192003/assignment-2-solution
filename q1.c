#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Unit digit of a given numbe is %d",x%10);
    return 0;
}