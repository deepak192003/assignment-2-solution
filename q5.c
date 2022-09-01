// Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,firstdigit,sum,middledigit,lastdigit;
    printf("Enter a number: ");
    scanf("%d",&x);
    lastdigit=x%10;
    x=x/10;
    middledigit=x%10;
    firstdigit=x/10;
    sum=firstdigit+middledigit+lastdigit;
    printf("sum is %d",sum);
    return 0;
}
