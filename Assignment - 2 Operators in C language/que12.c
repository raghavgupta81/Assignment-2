/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/
#include<stdio.h>
int main()
{
    float usd=76.23,inr;
    printf("Enter a amount in INR :\n");
    scanf("%f",&inr);
    printf("Amount in USD is %f",(inr/usd));
 return 0;
}