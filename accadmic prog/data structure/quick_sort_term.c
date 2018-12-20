#include <stdio.h>
#include<stdlib.h>
//#include<conio.h>
/*
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
*/
/*
int partition(int l; int h){
	int pivot,temp;
	pivot=a[l];
	int i=l,j=h;
	while (i<j){
		do
			i++;
		while (a[i]<pivot);

		do
			j--;
		while(a[j]>pivot);

		if (i<j){
		//	temp=a[j];
		//	a[j]=a[i];
		//	a[i]=temp;
			swap(&a[i],&a[j])
		}

	}
	void quick_sort(){



*/


int partition(int a[], int low, int high){
	int pivot=a[high];
	int i=(low-1);
	int j,temp;
	for(j=0;j<=high-1;j++){
		if (a[j]<=pivot){
			i++;
			//swap(&a[i], &a[j]);
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	//swap(&a[i+1],&a[high]);
	temp=a[i+1];
	a[i+1]=a[high];
	a[high]=temp;
	return (i+1);
}


void quicksort(int a[], int low, int high){
	if(low<high){
		int pi= partition(a, low ,high);
	     quicksort(a,low,pi-1);
       quicksort(a,pi+1,high);
	}
}

void print(int a[],int size){
	int i;
	for (i-0;i<size;i++){
		printf("%d",a[i]);
	}
	printf("\n");

}
int main(){
	int a[]={10,1,3,5,2,4,7};
	int n=sizeof(a)/sizeof(0);
	quicksort(a, 0, n-1);
	printf("thr sorted arr is");
	print (a,n);
	return 0;
	}
