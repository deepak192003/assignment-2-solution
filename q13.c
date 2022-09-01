// . Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int lastdigit,withoutlastdigit;
   lastdigit=a%10;
   withoutlastdigit=a/10;

    a  =  lastdigit *100  +  withoutlastdigit;
    printf("%d",a);

    return 0;
}
