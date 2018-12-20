#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};
struct node *head;

void insert(int x,int n){
  struct node *temp1=(struct node*)malloc(sizeof(struct node));
  temp1->data=x;
  temp1->next=NULL;
  if (n==1){
    temp1->next=head;
    head=temp1;
    return;

  }
  struct node *temp2 =head;
  int i;
  for(i=0;i<n-2;i++){
    temp2=temp2->next;

  }
  temp1->next=temp2->next;
  temp2->next=temp1;
}

void print(){
  struct node *temp=head;
  printf("the list is: ");
  while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}

void delete(int n){
  struct node *temp1 =head;
  if (n==1){
    head=temp1->next;
    free(temp1);
    return;

  }
  int i;
  for(i=0;i<n-2;i++){
    temp1=temp1->next;

  }
  struct node *temp2=temp1->next;
  temp1->next=temp2->next;
  free(temp2);
}

int main(){
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,3);
    insert(6,5);
    insert(7,4);
    print();
    delete(3);
    delete(1);
    print();
}
