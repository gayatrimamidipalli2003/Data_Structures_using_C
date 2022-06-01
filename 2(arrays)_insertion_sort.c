#include<stdio.h>
void insertion_sort(int *arr2,int n)
{
    for(int i=1;i<n;i++)
{
int temp=arr2[i];
int j=i-1;
if(temp<arr2[j])
{
arr2[j+1]=arr2[j];
arr2[j]=temp;
}
else
{
arr2[j+1]=temp;
}
j--;
}
}
void insertion_sort(int *arr1,int m)
{
    for(int i=1;i<n;i++)
{
int temp=arr1[i];
int j=i-1;
if(temp<arr1[j])
{
arr1[j+1]=arr1[j];
arr1[j]=temp;
}
else
{
arr1[j+1]=temp;
}
j--;
}
}
void main()
{
    int m,n,arr1[100],arr2[100],i,j;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr2[j]);
    }
    insertion_sort(arr1,m);
    for(i=0;i<m;i++)
    {
        printf("%d ",arr1[i]);
    }
    insertion_sort(arr2,n);
    for(j=0;j<n;j++)
    {
        printf("%d ",arr2[j]);
    }
}
