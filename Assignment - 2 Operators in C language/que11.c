/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter a number :\n");
    scanf("%d",&num);
    printf("Enter a appending digit :\n");
    scanf("%d",&digit);
    num=(num*10)+digit;
    printf("The resultint number is %d",num);
    return 0;
}