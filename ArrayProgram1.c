Q. Segregate 0's and 1's in an array

You are given an array of 0's and 1's in random order. Segregate 0's on left side and 1's on right side of the array. Taverse only once.
Input array = [0,1,0,1,0,0,1,1,1,0] Output array = [0,0,0,0,0,1,1,1,1,1]

Source Code
#include<stdio.h>
int maint()
{ int a[20],n,i,j,k,temp,a1[20],c=0,l;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]); }
  j=0;
  for(i=0;i<n;i++)
  { if(a[i]==0)
    { a1[i]=a[i]; l++; }
  }
  l=c;
  for(i=0;i<n;i++)
  { if(a[i]==1)
    { a1[l]=a[i]; l++; }
  }
  for(i=0;i<n;i++)
  { printf("%d ",a1[i]); }
  return 0;
}
