#include <stdio.h>
#define max 50
int arr[max];
int front=-1;
int rear=-1;


void insert(int x){
/*	if(front==-1){
		front=0;
		
	}*/

	if(front==max-1){
		printf("stack is full");
		return;
	}
	front=front+1;
	arr[front]=x;
}


void delete(){
	if (front=-1){
		printf("stack is empty");
		return;
	}
	front=front-1;
}


void display(){
	int i;
	for(i=0;i<front;i++){
		printf("%d",a[i]);
	}
}
int main(){
	int ch,i,n,da;
//	printf("enter the size of array");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//
	while(n!=-1){
		printf("\n 1 to insert 2 to delete 3 to display 4 to eexit\n"
				scanf("%d",&ch);
				switch(ch){
				case 1:
				pritnf("enter the number to enter");
				scanf("%d",&da);

				insert(da);
				break;
				case 2:
				delete();
				break;
				case 3:
				display();
				break;
				default:
				pritnf("re-enter your choice");
				}
				}
				}

	
