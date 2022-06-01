#include<stdio.h>
int min(int a,int b)
{
if(a>b)
{
return b;
}
return a;
}
//int l=-1;
int fibi_search(int *arr,int n,int se,int *fib)
{
int static l=-1;
int k=n-1,m;
if(arr[k]==se)
{
return 1;
}
if(fib[k-2]==0)
{
return 0;
}
m=min(l+fib[k-2],n-1);
if(arr[m]==se || arr[k]==se)
{
return 1;
}
if(se>arr[m])
{
l=m;
n=n-1;
}
else
{
n=n-2;
}
return fibi_search(arr,n,se,fib);
}
void main()
{
int n,i,se;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&se);
if(fibi_search(arr,n,se))
{
printf("true");
}
else
{
printf("false");
}
}

