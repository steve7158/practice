//linear linked list is lenear data elememnt where a data is kept in a node
//there are 2 feild one is called link feild and the other is called info feild
//Binary linked list : the first feild will hold thw address of the previous data middle will be the info feild and the third feeild is to the next node


//steps:
//1: create the node
//2: store the data incide the node
//3: link the nodes


#include <stdio.h>
// #include<conio.h>
#include <stdlib.h>


struct node{
  int data; //informationn
  struct mylist *next; //self refferntial structure
};


void printlist(struct node *n){
  while(n!=NULL){
    printf("%d",n->data);
    n=n->next;
  }
}

void push (struct node** head_ref, int new_data){
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=new_data;
  new_node->next=*head_ref;
  *head_ref=new_node;

}

void deletenode(struct node **head_ref, int position){
  if (*head_ref == NULL)
  return;

  struct node* temp = *head_ref;

  if (position == 0){
    *head_ref = temp->next;
    free(temp);
    return;
  }

  for (int i=0;temp!=NULL && i<position-1; i++)
  temp= temp->next
}

int main() {

  struct node* heazzzzd=NULL;
  struct node* second=NULL;
  struct node* third=NULL;

  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  third=(struct node*)malloc(sizeof(struct node));
  // printf("a data\n");
  // scanf("%d",&a->info);
  // printf

  head->data=1;
  head->next = second;

  second->data=2;
  second->next = third;

  third->data=3;
  third->next=NULL;

  printlist();

  return 0;
}
