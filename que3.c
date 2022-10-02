//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.


#include<stdio.h>

int main() {
    int i,a[10],sumOdd=0,sumEven=0;

    printf("enter 10 numbers :");
    for(i=0; i<=9; i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++) { 

    if(a[i]%2==0) 
    
    sumEven=sumEven+a[i];
   // printf("sum of Even numbers are %d :",sumEven);
    
    
    else 
    sumOdd=sumOdd+a[i];
  //  printf("\nsum of odd numbers are %d",sumOdd);

   

    
    }
     printf("sum of Even numbers are %d :",sumEven);
      printf("\nsum of odd numbers are %d",sumOdd);

    return 0;

}