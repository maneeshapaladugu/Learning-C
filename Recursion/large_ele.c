//Recursive function to find the largest element in a given unsorted array
#include<stdio.h>
int large(int *p,int n,int big)
{
  if(n>0)
  {
    if(p[n]>big)
      big=p[n];
    large(p,--n,big);
  }
  else
    return big;
}

int main()
{
  int arr[5];
  int i,n,big,l;
  n=sizeof(arr)/sizeof(arr[0]);
  printf("Enter elements in to array\n");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  big=arr[0];
  l=large(arr,n-1,big);
  printf("Largest element is:%d\n",l);
}
