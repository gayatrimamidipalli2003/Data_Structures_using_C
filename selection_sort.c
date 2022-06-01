/*selection sort
66 44 22 77 88 43 11 10
0  1  2  3  4  5  6  7
66 44 22 77 10 43 11 88

66 44 22 11 10 43 77 88

43 44 22 11 10 66 77 88

43 10 22 11 44 66 77 88

11 10 22 43 44 66 77 88

11 10 22 43 44 66 77 88

10 11 22 43 44 66 77 88

first we'll find highest element and move it to highest index then highest index
value is replaced by highest value index*/

#include<stdio.h>
int max(int *arr,int n)
{
    int i,ind=0,me=arr[0];
    for(i=0;i<=n;i++)
    {
        if(arr[i]>me)
        {
            me=arr[i];
            ind=i;
        }
    }
    return ind;
}
void selection_sort(int *arr,int n)
{
    int i,temp,maxind;
for(i=n-1;i>=0;i--)
{
   maxind=max(arr,i);
   temp=arr[i];
   arr[i]=arr[maxind];
   arr[maxind]=temp;
}
}
void main()
{
int arr[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
selection_sort(arr,n);
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
