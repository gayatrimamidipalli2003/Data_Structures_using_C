//merge_sort (basic logic)
/*
4
0 1 2 3
1 5 6 10
i

6
0 1 2 3   4   5
2 3 4 20 100 200
j

i<j --> add i to res and i++
        else, add j to res and j++

to add remaining elements, add j j++
                     else, add i i++

*/
#include<stdio.h>
////#include<stdlib.h>
int res[100];
int *merge(int *a,int n,int *b, int m) //int* means we are passing integer address.     ,integer value
{
    int i=0,j=0,k=0;////*res;
    ////res=(int *)malloc((n+m)*sizeof(int));
    //static int res[100];
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            res[k++]=a[i++];
        }
        else
        {
            res[k++]=b[j++]; //res[k]=b[j];
            //j++;
        }
        //k++;
    }
    while(i<n)  // for remaining elements
    {
        res[k++]=a[i++];
    }
    while(j<m)
    {
        res[k++]=b[j++];
    }
    return res;
}
void main()
{
    int n,m,a[100],b[100],i,*res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    res=merge(a,n,b,m);   //func call merge
                          // we are sending integer address(res),integer value
    for(i=0;i<(n+m);i++)
    {
        printf("%d ",res[i]);
    }
}


/*
#include<stdio.h>
void merge(int *arr, int l,int m,int h)
{
   int i,j,n1,n2,a[100],b[100],k;
   n1=m-l+1;
   n2=h-m;
   k=l;
   for(i=0;i<n1;i++)
   {
   a[i]=arr[k++];
   }
   k=m+1;
   for(i=0;i<n2;i++)
   {
   a[i]=arr[k++];
   }
}


void merge_sort(int *arr,int n)
{
int p,i,l,h,m;
for(p=2;p<=n;p=p*2)
{
   for(i=0;i<n;i=i+p)
   {
     l=i;
     h=l+p-1;
     m=(l+h)/2;
     if(h<=n)
     {

     }
   }
}
}

*/
