#include<stdio.h>
int l=0,c=1;
int binary_search(int *arr,int n,int se)
{
int h=n-1,m;
if(l>h)
{
return -c;
}
m=(l+h)/2;
if(se==arr[m])
{
return c;
}
else if(se>arr[m])
{
l=m+1;
}
else
{
h=m-1;
}
c++;
return binary_search(arr,n,se);
}
void main()
{
int n;
scanf("%d",&n);
int arr[n],i,se,res;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&se);
res=binary_search(arr,n,se);
if(res>0)
{
printf("%d true\n",res);
}
else
{
printf("%d false",-(res));
}
}
