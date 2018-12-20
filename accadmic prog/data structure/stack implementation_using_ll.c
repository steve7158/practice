#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
  // struct node *prev;
};

struct node *head;

void insert(int x){
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=NULL;
  // temp->prev=NULL;
  // if (head==NULL){
  //   head=temp;
  //   return;
  //
  // }
  //
  // head->prev=newnode;
  // newnode->next=head;
  // head=newnode;
  temp->next=head;
  head=temp;
}

void reverse(){
    struct node *current=head;
    if(head==NULL){
      printf("the stack is empty");
      return;
    }
    struct node *next=NULL;
    struct node *prev=NULL;

    while (current!=NULL){
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
    }
    head=prev;
      // return head;

}

void print() {
  /* code */
  struct node *temp=head;

  while (temp!=NULL){
    printf("%d ",temp->data );
    temp=temp->next;
  }
}

void deleate(){
  struct node *temp;
  temp=head;
  if(head==NULL){
    printf("stack is empty");
    return;
  }
  head=temp->next;
  printf("elemet deleated %d \n",temp->data);
  free(temp);

}


int main (){
  head=NULL;
  int choice, x;
  while (choice!=5){
    // switch (ch) {

    printf("\n1. Insert a number to the array\n2. Delete a number from the array\n3. display\n4. reverse\n5. exit!" );
    printf("\n eneter your choice: " );
    scanf("%d",&choice );
    switch (choice) {
      case 1:{
        printf("enter a value to be inserted: ");
        scanf("%d",&x);
        insert(x);
        break;
      }
      case 2:{
        deleate();
        break;
      }
      case 3:{
        // pass;
        print();
        break;

      }
      case 4:{
        reverse();
        break;
      }
      case 5:{
        break;
      }
      default:{
        printf("enter valid choice");
      }
    }
  }
}
