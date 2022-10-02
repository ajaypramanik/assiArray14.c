// 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>

int main() {
    int i,j,a[10],temp;

    printf("enter 10 numbers :");
    for(i=0; i<=9; i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++) 
    {
        for(j=i+1;j<10;j++) 
        {
            if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }
     for(i=0;i<10;i++) {
     
        printf("second largest element is %d",a[1]);
        break;
     }
     
    
    return 0;

}


