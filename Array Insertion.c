#include<stdio.h>
#define N 5

void insertion(int arr[],int value,int pos)
{
    int i ;
    for(i=N; i>=pos; i--)
    {
        arr[i] = arr[i-1] ;
    }
   arr[pos-1] = value ;
}
int main()
{
    int arr[N], i,el,pos;

    printf("\nEnter the values : ");
    for(i=0; i<N; i++)
        scanf("%d",&arr[i]);

    printf("\nEnter the element you want to insert : ");
    scanf("%d",&el);
    printf("\nEnter the position you want to insert : ");
    scanf("%d",&pos);

    insertion(arr,el,pos);

    printf("Array after insertion : ");
        for(i=0; i<=N; i++)
            printf("%d ",arr[i]);

    return 0;
}
