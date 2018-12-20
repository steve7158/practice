#include <stdio.h>
#include <stdlib.h>


struct node {
  int data;
  struct node *next;
  struct node *prev;
};
struct node *head;

struct node* get_new_node(int x){
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->next=NULL;
  newnode->prev=NULL;
  return newnode;
}
void insert_at_head(int x){
  struct node* newnode=get_new_node(x);
  if (head==NULL){

    head=newnode;
    return;
  }
  head->prev=newnode;
  newnode->next=head;
  head=newnode;
}

void insert_at_tail(int x){
  struct node *temp=head;
  struct node *newnode=get_new_node(x);
  if (head==NULL){
    head=newnode;
    return;
  }

  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  newnode->prev=temp;

}


void print(){
  struct node *temp=head;
  printf("forward: ");
  while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}

void reverseprint(){
  struct node *temp=head;
  if (temp==NULL){
    printf("the list is empty");
    return;
  }
  while(temp->next!=NULL){
    temp=temp->next;

  }
  printf("reverse:" );
  while(temp!=NULL){
    printf("%d",temp->data );
    temp=temp->prev;
  }
 printf("\n");

}

int main(){
  struct node *head=NULL;

  insert_at_head(1);
  print();
  reverseprint();
  insert_at_head(2);
  print();
  reverseprint();
  insert_at_head(3);
  print();
  reverseprint();
  insert_at_tail(4);
  print();
  reverseprint();
  insert_at_tail(5);
  print();
  reverseprint();
  insert_at_tail(6);
  print();
  reverseprint();
  insert_at_head(7);
  print();
  reverseprint();
  insert_at_head(8);

  print();
  reverseprint();
}
