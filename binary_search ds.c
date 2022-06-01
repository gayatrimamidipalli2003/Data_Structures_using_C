#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
int l,m,h;
l=0;
h=n-1;
while(l<=h)
//condition based//
{
m=(l+h)/2;
if(se==arr[m])
{
return 1;
}
else if(se>arr[m])
{
l=m+1;
}
else
{
h=m-1;
}
}
if(l>h)
{
return 0;
}
}
void main()
{
int n;
scanf("%d",&n);
int arr[n],i,se;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&se);
if(binary_search(arr,n,se))
{
printf("true\n");
}
else
{
printf("false");
}
}
