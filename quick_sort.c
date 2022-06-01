/*quick sort
ji
0 1 2 3 4 5 6 7
8 1 7 2 6 3 5 4
              p
i<p --> swap(i,j)  i++  j++  //this is all for 4 1 3 2 5 6 8 9 7
                                                       |-> middle value before and
i++                                                       after only need to be sort
*/

#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int part(int *arr,int L,int H)    //partition program
{
    int p=H,i,j=L,temp;
    for(i=L;i<p;i++)
    {
        if(arr[i]<arr[p])
        {
            swap(&arr[i],&arr[j]);
            j++;
        }
    }
    swap(&arr[j],&arr[p]);
    return j;
}
void quick_sort(int *arr, int L, int H)
{
    int p;
    if(L<H)
    {
        p=part(arr,L,H);
        quick_sort(arr,L,p-1);
        quick_sort(arr,p+1,H);
    }
}
void main()
{
    int arr[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,n-1); //func call merge
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
