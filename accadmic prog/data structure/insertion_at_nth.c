  #include <stdio.h>
  // #include <conio.h>
  #include<stdlib.h>
  struct node{
    int data;
    struct node *next;
  };
  struct node *head;


  void insert(int x, int n){
    struct node *temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=x;
    temp1->next=NULL;
    if(n==1){
      temp1->next=head;
      head = temp1;
      return;
    }
    struct node *temp2 = head;
    int i;
    for(i=0;i<n-2;i++){
      temp2=temp2->next;
      // head=temp2;

    }
    temp1->next=temp2->next;
    temp2->next=temp1;
  }

  void print(){
    struct node *temp=head;
    printf("the list is \n" );
    while(temp!=NULL){
      printf("%d ", temp->data);
      temp=temp->next;
    }
    printf("\n" );

  }


  int main(){
    head = NULL;
    // int n,i,x;
    // pritnf("enter at the no of terms to insert: ");
    // scanf("%d",&n );
    insert(2,1);
    insert(3,2);
    insert(4,3);
    insert(5,2);
    insert(6,1);
    print();
  }
