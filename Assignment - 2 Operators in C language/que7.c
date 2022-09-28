//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int num,count=0,temp=0;
    printf("Enter a number :\n");
    scanf("%d",&num);
    while(num!=0)
    {
    temp=num&1;
    count++;
    if(temp==1)
    {
        printf("The position of first 1 in LSB is =%d",count);
        break;
    }
    num=num>>1;
    }
    
    return 0;
}