//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int a,s=0;
    printf("Input a three digit number :\n");
    scanf("%d",&a);
   s=s+(a%10);
   a=a/10;
   s=s+(a%10);
   a=a/10;
   s=s+(a%10);
    printf("sum of entered three digit number is =%d",s);



    return 0;
}