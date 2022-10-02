// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user

#include<stdio.h>

int main() {
    int i,a[10],sum=0;

    printf("enter 10 numbers :");
    for(i=0; i<=9; i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    sum=sum+a[i];
    printf("sum of numbers is %d :",sum);

    return 0;

}