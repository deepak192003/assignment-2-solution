//  Write a program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);

    if(x&1)
    {
            printf("lsb of %d is set(1)",x);
    }
    else
    {
        printf("lsb of %d is set(0)",x);
    }
}