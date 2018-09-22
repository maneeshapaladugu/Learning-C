#include<stdio.h>
void array(int*,int);
int main()
{
  //Passing 1-dimensional array to a fuction
  int n,arr[5]={1,2,3,4,5};
  n=sizeof(arr)/sizeof(arr[0]);
  array(arr,n);
}
void array(int *a,int n)
{
  int i;
  for(i=0;i<n;i++)
    printf("%d ",*(a+i));//a[i]==*(a+i);
  printf("\n");
}
  
  
