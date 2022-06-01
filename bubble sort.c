//bubble sort
//67 34 54 21 76 55 44
//i  j

//i>j --> swap(i,j) i++ j++

//i>j -->  34 67 54 21 76 55 44
//67>54 -> 34 54 67 21 76 55 44
//67>21 -> 34 54 21 67 76 55 44
//67<76 -> 34 54 21 67 76 55 44
//76>55 -> 34 54 21 67 55 76 44
//76>44 -> 34 54 21 67 55 44 76    *change one by one and again continue that process

//54>21 -> 34 21 54 67 55 44 76
//67>55 -> 34 21 54 55 67 44 76
//67>44 -> 34 21 54 55 44 67 76

//34>21 -> 21 34 54 55 44 67 76
//55>44 -> 21 34 54 44 55 67 76
//54>44 -> 21 34 44 54 55 67 76

#include<stdio.h>
/*void swap(int i,int j)
{
    int temp,i;
    for(i=0;i<=n;i++)
    {
    if( arr[i]> arr[j])
        {
           temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
        }
    }
}
void bubble_sort(int *arr,int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        int j=i+1;
        swap(i,j);
    }
}*/
void bubble_sort(int *arr,int n)
{
    int i,j,p,sc,temp;
    for(p=1;p<n;p++)
    {
        sc=0;
        for(i=0;i<n-p;i++)
        {
            j=i+1;
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                sc++;
            }
        }
        if(sc==0)
        {
            break;
        }
    }
}
void main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}



