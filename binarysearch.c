#include<stdio.h>
void main()
{
  int l,r,mid,i,size,n;
  printf("enter the size of array:  ");
  scanf("%d",&size);
  int a[size];
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);
  printf("Enter the no. you want to search: ");
  scanf("%d",&n);
  l=0;
  r=size--;
  while(l<=r)
  {
    mid=(r+l)/2;
    if(n==mid)
    printf("element is present at index %d",mid);
    if(n<mid)
    r=mid-1;
    else
    l=mid+1;
  }
}
