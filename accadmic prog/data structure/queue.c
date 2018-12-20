#include <stdio.h>
// #include <conio.h>
#define max 50
void display();
void insert();
void delete();
int queue_array[max];
int  rear=-1;
int front= -1;
void main(){
  int choice,x=1;
  while(x==1){
    printf("press 1 for insertion of an element in queue \n press 2 for deletion of front element from queue \n press 3 to display th eelement so far \n preass 4 to exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
      insert();
      break;
      case 2:
      delete();
      break;
      case 3:
      display();
      break;
      case 4:
      x=0;
      break;
      default:
      printf("enter a valid value\n");
      }
    }
}


void insert(){
  int add_item;
  if (rear==max-1)
    printf("queue overflow \n");
  else{
  if (front==-1){   //it is for the insertion of brand new elements
    front=0;
  printf("insert the elements in the queue\n");
  scanf("%d\n",&add_item);
  rear=rear+1;
  queue_array[rear]=add_item;

    }
  }
}


void delete(){
  if(front==-1||front>rear){
    printf("queeue underflow\n");
  }
  else{
    printf("the element deleted from queue is %d",queue_array[front]);
    front=front+1;
    //end of delee statement
  }
}


void display(){
  int i;
  printf("the queue is :");
  for(i=front;i<=rear;i++){
    printf("%d\n",queue_array[i] );
  }
}
