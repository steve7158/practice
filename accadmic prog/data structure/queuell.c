#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *front;
struct node *rear;

void enqueue(int data){
  struct node *temp=(struct node*)malloc()(sizeof(struct node));

  temp->data=data;
  temp->next=NULL;
  if (head==NULL){
      head=temp;
      return;
  }
  struct node *temp1;
  temp1=head;
  while(temp->next!=NULL){
    temp1=temp1->next;
  }
  temp1->next=temp;
  (temp1->next)->next=rear;
  rear=(temp->next);
}


void dequeue(){
  struct node *temp;
  temp=head;
  head=temp->next;
  free (temp);
}


int main(){
  front=NULL;
  rear=NULL;
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  dequeue();
}
