// 5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user

#include<stdio.h>

int main() {
    int i,a[10],min;

    printf("enter 10 numbers :");
    for(i=0; i<=9; i++)
    scanf("%d",&a[i]);
    min=a[0];
    for(i=0;i<=9;i++) {
    if(min<=a[i])
    printf(" %d ",min);
    min=a[i];
    // printf(" %d ",min);
    // min=a[i];
    }
    
    // printf(" smallest number is %d :",min);

    return 0;

}

