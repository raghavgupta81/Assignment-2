//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
   printf("Enter value of \"a\" :\n");
    scanf("%d",&a);
    printf("Enter value of \"b\" :\n");
    scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
    printf("swaped values are :\na =%d and b =%d",a,b);

    return 0;
}