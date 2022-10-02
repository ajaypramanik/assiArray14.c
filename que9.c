// 9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user


#include<stdio.h>

int main() {

  int i,j,temp,a[10]={10,40,50,36,22,80,42,30,69,17};

  for(i=0;i<10;i++)  
  {
    for(j=i+1;j<10;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  }
  for(i=0;i<10;i++) {
  printf(" %d",a[i]);
 // break;
  }
  return 0;
}