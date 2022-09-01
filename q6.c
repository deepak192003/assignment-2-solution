// Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter small character or capital character: ");
    scanf("%c",&ch);
    printf("Ascii code of %c is %d",ch,ch);
}