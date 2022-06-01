/*
8
0 1 2 3 4 5 6 7
1 4 6 8 2 3 5 10
l     m        h

1 2 3 4 5 6 8 10

i<j ---> add j j++

*/

#include<stdio.h>
void merge(int *arr,int n)
{
    int i,j,l,m,h;
    int a[100],b[100],k;
    l=0;
    h=n-1;
    m=(l+h)/2;
    for(i=l;i<=m;i++)
    {
        a[k++]=arr[i];
    }
    k=0;
    for(i=m+1;i<=h;i++)
    {
        b[k++]=arr[i];
    }
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            arr[k++]=a[i++];
        }
        else
        {
            arr[k++]=b[j++]; //res[k]=b[j];
            //j++;
        }
        //k++;
    }
    while(i<n)  // for remaining elements
    {
            arr[k++]=a[i++];
    }
    while(j<m)
    {
        arr[k++]=b[j++];
    }
    return arr;
}
void main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge(arr,n); //func call merge
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
