#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct bst{
	int data;
	struct bst *left;
	struct bst *right;
};


struct bst *get_new_node(int data){
	struct bst *newnode=(struct bst*)malloc(sizeof(struct bst));
	newnode->data=data;

	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}


struct bst *insert(struct bst *root, int data){
	if(root==NULL){
		root=get_new_node(data);
	}

	else if (data<=root->data){
		root->left=insert(root->left,data);
	}

	else if (data>root->data){
		root->right=insert(root->right,data);
	}


	return root;
}

bool search (struct bst *root, int data){
       if(root==NULL){
      	 	return false;
       }

	else if(data==root->data){
	 	return true;
	}

       else if(data<=root->data){
	       search(root->left,data);
       }

       else if (data>root->data){
	       search(root->right,data);
       }

}


int main(){
	struct bst *root=NULL;
	root=insert(root,1);
        root=insert(root,2);
        root=insert(root,3);
        root=insert(root,4);
        root=insert(root,5);
        root=insert(root,6);
        root=insert(root,7);
        root=insert(root,8);
        root=insert(root,9);
        root=insert(root,10);
        root=insert(root,11);
	printf("enter a value to search");
	int data;
	scanf("%d",&data);

	if(search(root,data)==true){
	       printf("found");
	}
	else{
		printf("not found");
	}
}
