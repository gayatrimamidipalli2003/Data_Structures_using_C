//   44 33 22 66 77 32 88 65 55 34
//   0  1  2  3  4  5  6  7  8  9
//      i
#include<stdio.h>
void insertion_sort(int *arr,int n)
{
for(int i=1;i<n;i++)
{
int temp=arr[i];
int j=i-1;
if(temp<arr[j])
{
arr[j+1]=arr[j];
arr[j]=temp;
}
else
{
arr[j+1]=temp;
}
j--;
}
}
void main()
{
int n,arr[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
insertion_sort(arr,n);
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
