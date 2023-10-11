#include<stdio.h>
#define N 5
int queue[N] ;
int front = -1 ;
int rear = -1 ;

void enqueue(int x)
{
    if(rear == N-1)
        printf("Overflow");
    else if(front == -1 && rear == -1)
    {
        front = rear = 0 ;
        queue[rear] = x ;
    }
    else
        rear++ ;
    queue[rear] = x ;
}
void dequeue()
{
    if(rear == -1 && front == -1)
        printf("Underflow");
    else if(front == rear)
        front = rear = -1 ;
    else
        front++ ;
}
int main()
{
    int i ;
    enqueue(45) ;
    enqueue(86) ;
    dequeue() ;
    enqueue(24) ;
    dequeue() ;
    enqueue(32) ;

   for(i=front; i<=rear; i++)
   printf("%d ",queue[i]);

    return 0 ;
}
