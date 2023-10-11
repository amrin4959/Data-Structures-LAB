#include<stdio.h>
#define N 5
int front = -1 ;
int rear = -1 ;
int queue[N] ;

void enqueue(int x)
{
    if(front ==-1 && rear ==-1)
    {
        front = rear = 0 ;
        queue[rear] = x ;
    }
    else if((rear+1)%N == front)
        printf("Overflow");
        else
        {
            rear = (rear+1) % N ;
            queue[rear] = x ;
        }
}
void dequeue()
{
  if(front ==-1 && rear ==-1)
        printf("Underflow");
        else if(front == rear)
            front = rear = -1 ;
        else
            front = (front+1 )% N ;
}
 void display()
 {
      int i;
   if(front == -1 && rear == -1)
     printf("queue is empty");
     else
     for(i=front; i!=rear; i=(i+1)%N)
    printf("%d  ", queue[i]);

   printf("%d  ",queue[rear]);
 }
int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    dequeue();
    dequeue();
    enqueue(0);
    enqueue(10);
    enqueue(11);

    return 0;
}
