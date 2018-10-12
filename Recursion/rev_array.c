//Recursive function to reverse the elements of a given array 
#include<stdio.h>
int rev_arr(int *p,int n)
{
  static int i=0;
  int t;
  if(n>=i)
  {
  t=p[n];
  p[n]=p[i];
  p[i]=t;
  i++;
  rev_arr(p,--n);
  }
  else
   return 0;
  
}

int main()
{
  int n,i;
  int arr[5];
  n=sizeof(arr)/sizeof(arr[0]);
  printf("Enter elements in to array\n");
  for(i=0;i<n;i++) 
    scanf("%d",&arr[i]);
  rev_arr(arr,n-1);
  printf("After reverse\n");
  for(i=0;i<n;i++) 
    printf("%d ",arr[i]);
}
