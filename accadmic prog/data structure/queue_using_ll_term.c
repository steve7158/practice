#include<stdio.h>
#include<stdlib.h>

struct qnode{
  int key;
  struct qnode *next;

};

struct queue{
  struct qnode *front, *rear;

};

struct qnode *newnode(int k){
  struct qnode *temp=(struct qnode*)malloc(sizeof(struct qnode));
  temp->key=k;
  temp->next=NULL;
  return temp;

}

struct queue *createqueue(){
  struct queue *q=(struct queue*)malloc(sizeof(struct queue))
  q->front=q->rear=null;
  return q;

}

void enqueue(struct queue *q, int k){
  struct qnode *temp=newnode(k);
  if (q->rear==NULL){
    q->front=q->rear=temp;
    return;
  }
  q->rear->next=temp;
  q->rear=temp;
}


struct qnode *dequeue(struct queue *q){
  if (q->front==NULL)
    return NULL;
  struct qnode *temp=q->front;
  q->front=q->front->next;

  if (q->front==NULL)
    q->rear=NULL;
  return temp;
}


int main(){
  struct queue *q=createqueue();
  enqueue(q,10);
  enqueue(q,20);
  dequeue(q);
  dequeue(q);
  enqueue(q,30);
  enqueue(q,40);
  enqueue(q,50);
  struct QNode *n = deQueue(q);
	if (n != NULL)
	printf("Dequeued item is %d", n->key);
	return 0;
}
