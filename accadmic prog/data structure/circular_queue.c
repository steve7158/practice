#include <stdio.h>
#define max 50;
int arr[max];
int front=-1;
int rear=-1;

void enqueue(int x){
	if(front==0&&rear=max-1||rear==(front-1)/(max-1)){
		printf("the queue is full");
		return;
	}
	else if (front==-1 && rear==-1){
		front=rear=0;
		arr[rear]=x;
		}
	else if (rear=(max-1)&&front!=0){
		rear=0;
		arr[rear]=x;
	}
	else{
		rear++;
		arr[rear]=x;
	}
}

void dequeue(){
	if (front==-1){
		pritnf("the queue is empty");
	}
	else if (front==max-1){
		front=0;
	}
	else
		front++;
}

void display(){
	int i;
	for(i=0;i<rear;i++){
		printf("%d", arr[i]);
	}
}

int main(){
	printf("\nentering the data\n");

enqueue(21);
enqueue(22);
enqueue(23);
enqueue(24);
enqueue(25);
enqueue(26);
enqueue(27);
printf("\npriinting the data.....\n");

display();

printf("\ndeleting data.....\n");
dequeue();
printf("\ndisplaying after deleated data.............\n");
display();
}





}
