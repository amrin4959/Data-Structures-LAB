#include<stdio.h>
#define N 5

void deletion(int arr[],int value)
{
    int i ,j ,pos;
    for(i=0; i<N; i++)
    {
        if(arr[i]==value)
           pos = i ;
    }
    for(j=pos; j<N-1; j++)
        arr[j] = arr[j+1] ;
    }
int main()
{
    int arr[N], i,el,pos;

    printf("\nEnter the values : ");
    for(i=0; i<N; i++)
        scanf("%d",&arr[i]);

    printf("\nEnter the element you want to delete : ");
    scanf("%d",&el);

    deletion(arr,el);

    printf("Array after deletion : ");
        for(i=0; i<N-1; i++)
            printf("%d ",arr[i]);

    return 0;
}
