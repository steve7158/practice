#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
};
struct node *head;


void insert(int x){
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=NULL;
  if(head==NULL){
    temp->next=head;
    head=temp;
    return;
  }
  struct node *temp1=head;
  while(temp1->next!=NULL){
    temp1=temp1->next;

  }
  temp1->next=temp;

}


void print (){
  struct node *temp=head;
  while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;

  }
  printf("\n");

}


int main(){
  head=NULL;
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  print();}
