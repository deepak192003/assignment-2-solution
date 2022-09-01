// Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("After swaapping value of x is %d and y is %d",x,y);
}