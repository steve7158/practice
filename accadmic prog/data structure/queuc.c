#include <stdio.h>
#include<stdlib.h>
#define max 50
int arr[max];
int front=-1;
int rear=-1;

void enqueue(int data){
  if (rear==max-1){
    printf("queue is overflow");

  }
  else if(front=-1)
    front=0;
  rear=rear+1;
  arr[rear]=data;
  printf("the queu so far is");
  int i;
  for(i=front;i++;i<rear){
    printf("   %d   ", a[i] );
  }

}

void dequeue(){
  int data;
  if (front=-1||front>rear){
    printf("queue is underflow")
    return;

  }
  printf("the number deleated from the queue is %d",a[front]);
  front=front+1;


}

int main(){
    int ch,x=1;
    while(x==1){
      printf("press 1 for insertion of an element in queue \n press 2 for deletion of front element from queue \n press  \n preass 4 to exit\n");
      scanf("%d",&ch);
      switch(ch){
        switch(choice){
          case 1:
          insert();
          break;
          case 2:
          delete();
          break;
          // case 3:
          // display();
          // break;
          case 4:
          x=0;
          break;
          default:
          printf("enter a valid value\n");
          }
        }
    }
      }
    }





}
