//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of \"a\" :\n");
    scanf("%d",&a);
    printf("Enter value of \"b\" :\n");
    scanf("%d",&b);

    c=b;
    b=a;
    a=c;
    printf("swaped values are :\na =%d and b =%d",a,b);

    return 0;
}