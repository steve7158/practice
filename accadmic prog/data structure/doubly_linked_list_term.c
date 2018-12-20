#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
  struct node *prev;

};
struct node *head;

struct node *get_new_node(int data){
  struct node *newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  newnode->prev=NULL;
  return newnode;
}



void insertion_at_head(int data){
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp=get_new_node(data);
  if(head==NULL){
    head=temp;
    return;
  }
  head->prev=temp;
  temp->next=head;
  head=temp;


}

void insert_at_the_tail(int data){
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp=get_new_node(data);
  if (head==NULL){
    head=temp;
    return;
  }
  struct node *temp1=head;
  while(temp1->next!=NULL){
    temp1=temp1->next;

  }
  temp1->next=temp;
  temp->prev=temp1;
}

void delete_at_the_head(){
  struct node *temp;
  temp=head;
  if (temp->next==NULL){
    head=NULL;
    free(temp);
    return;
  }
  (temp->next)->prev=NULL;
  head=head->next;
  free(temp);

}

void delete_at_the_tail(){
  struct node *temp;
  temp=head;
  if(temp->next==NULL){
    head=NULL;
    free(temp);
    return;
  }

  while (temp->next!=NULL){
    temp=temp->next;

  }
  (temp->prev)->next=NULL;
  free(temp);
}

void delete_from_nth_pos( int loc){
  struct node *temp1;
  temp1=head;
  int i;
  if (temp1->next==NULL){
    head=NULL;
    free (temp1);
    return;
  }

  for(i=0;i<loc-2;i++){
    temp1=temp1->next;

  }
  struct node *temp2=temp1->next;
  temp1->next=temp2->next;
  (temp2->next)->prev=temp1;
  free (temp2);

}

void insertion_at_nt(int data, int loc){
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode=get_new_node(data);
  struct node *temp;
  temp=head;
  int i;
  for (i=0;i<loc-2;i++){
    temp=temp->next;
  }
  (temp->next)->prev=newnode;
  newnode->next=(temp->next);
  temp->next=newnode;
  newnode->prev=temp;
  // newnode->next=temp->next
  // (temp->next)

}

void print(){
  struct node *temp;
  // temp=(struct node*)malloc(sizeof(struct node));
  temp=head;
  while(temp!=NULL){
    printf("  %d  ",temp->data);
    temp=temp->next;
  }
}

void print_reverse(){
  struct node *temp;
  temp=head;
  while(temp->next!=NULL){
    temp=temp->next;

  }
  while(temp!=NULL){
    printf("   %d  ",temp->data);
    temp=temp->prev;

  }
}

int main(){
  head=NULL;
  insertion_at_head(1);
  insertion_at_head(2);
  insertion_at_head(3);
  insertion_at_head(4);
  insertion_at_head(5);
  insertion_at_head(6);
  printf("insert_at_head \n");
  print();
  printf("\ninsert_at_tail \n");
  insert_at_the_tail(12);
  insert_at_the_tail(13);
  insert_at_the_tail(14);
  insert_at_the_tail(15);
  insert_at_the_tail(16);
  insert_at_the_tail(17);
  insert_at_the_tail(18);
  insert_at_the_tail(19);
  print();
  printf("\nnow in reverse order\n");
  // reverseprint();
  print_reverse();
  printf("\n\n\n");
  printf("\ndeletion from the head\n");
  delete_at_the_head();
  print();
  printf("\ndeletion at head\n");
  delete_at_the_head();
  print();
  printf("\ntail pos deletion\n");
  delete_at_the_tail();
  print();
  printf("\nteil pos deletion\n");
  delete_at_the_tail();
  print();
  printf("\nnth position deletion\n");
  delete_from_nth_pos(3);
  print();
  printf("\ninsertion at nth\n");
  insertion_at_nt(3,3);
  print();


}
