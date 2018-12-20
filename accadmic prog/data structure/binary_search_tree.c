  #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct bstnode{
  int data;
  struct bstnode *left;
  struct bstnode *right;

};

 struct bstnode *get_new_node(int data){
   struct bstnode *newnode=(struct bstnode*)malloc(sizeof(struct bstnode));
   newnode->data=data;
   newnode->left=NULL;
   newnode->right=NULL;
   return newnode;
 }

 struct bstnode *insert (struct bstnode *root, int data){
   if (root==NULL){
     root=get_new_node(data);

   }
   else if (data<=root->data){
     root->left=insert(root->left,data);
   }
   else {
     root->right=insert(root->right,data);

   }
   return root;
 }


 bool search (struct bstnode *root, int data){
   if (root==NULL){
     return false;
   }
   else if (data==root->data){
     return true;
   }
   else if(data<=root->data){
     return search (root->left,data);
   }
   else if(data>root->data)
     return search (root->right,data);

 }

 int main(){
   struct bstnode *root=NULL;
   root=insert(root,1);
   root=insert(root,2);
   root=insert(root,3);
   root=insert(root,4);
   root=insert(root,5);
   root=insert(root,6);
   printf("enter a number to search" );
   int data;
   scanf("%d",&data);
   if (search(root,data)==true){
     printf("found \n");

   }
   else{
     printf("not found! \n");

   }
 }
