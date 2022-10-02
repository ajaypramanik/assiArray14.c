// 8. Write a program to find the second smallest number in an array.Take array values
//from the user.

#include<stdio.h>

int main() {

  int i,j,temp,a[10]={10,40,50,36,22,80,42,30,69,17};

  for(i=0;i<10;i++)  
  {
    for(j=i+1;j<10;j++)
    {
        if(a[i]>a[j])
        {
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