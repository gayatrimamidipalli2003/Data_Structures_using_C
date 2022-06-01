#include<stdio.h>
int min(int a,int b)
{
if(a>b)
{
return b;
}
return a;
}
int fibi_search(int *arr,int n,int se)
{
int i,fib[n],l,m,k;
l=-1,k=n-1;
fib[0]=0,fib[1]=1;
for(i=2;i<n;i++)
{
fib[i]=fib[i-1]+fib[i-2];
}
while(fib[k-2]!=0)
{
m=min(l+fib[k-2],n-1);
if(se==arr[m] || arr[k]==se)
{
return 1;
}
else if(se>arr[m])
{
l=m;
k=k-1;
}
else if(se<arr[m])
{
k=k-2;
}
}
if(arr[k]==se)
{
    return 1;
}
return 0;
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
