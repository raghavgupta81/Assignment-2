//Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character :\n");
    scanf("%c",&a);
    printf("character \"%c\" and its ASCII code is %d",a,a);
    return 0;
}