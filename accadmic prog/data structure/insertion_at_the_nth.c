// #include <iostream.h>
// #include <conio.h>
#include <stdlib.h>
#include <stdio.h>
struct node{
  int data;
  struct node *next;

};
struct node *head;

void insert(int x, int n){
  struct node *temp1=(struct node*)malloc(sizeof(struct node));
  temp1->data=x;
  temp1=temp1->next;
  if(n==1){
    temp1->next=head;
    head=temp1;
    return;

  }
  struct node *temp2=head;
  int i;
  for (i=0;i<n-2;i++){
    temp2=temp2->next;

  }
  temp1->next=temp2->next;
  temp2->next=temp1;


}
void print(){
  struct node *temp=head;
  printf("the list is : ");
  while(temp!=NULL){
    printf("%d",temp->data);
    temp=temp->next;

  }
  printf("\n");
}


int main(){
  head=NULL;
  insert(1,1);
  insert(2,2);
  insert(3,3);
  insert(7,3);
  insert(4,4);
  insert(5,5);
  insert(6,6);
  print();

}
