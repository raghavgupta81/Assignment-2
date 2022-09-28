/*Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include<stdio.h>
int main()
{ 
    int num;
    printf("Enter a given number :\n");
    scanf("%d",&num);
    num=num&1;
    if(num)
    printf("Given number is odd");
    else
    printf("Given number is even");
    return 0;
}