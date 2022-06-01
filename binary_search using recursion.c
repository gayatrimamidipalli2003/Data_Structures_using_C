#include<stdio.h>
int binary_search(int *arr,int l,int h,int se)
{
if(l>h)
{
return 0;
}
int m;
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
return binary_search(arr,l,h,se)
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
if(binary_search(arr,0,n-1,se))
{
printf("true\n");
}
else
{
printf("false");
}
}
