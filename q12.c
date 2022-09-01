// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
// convert it into USD.
#include<stdio.h>
int main()
{
    float rupee,usd;
   
    printf("Enter Indian rupee: ");
    scanf("%f",rupee);
   usd= rupee/76.23;
   printf("Indian rupee in usd is %f",usd);
    return 0;
}