#include<stdio.h>

int  binarry_search(int arr[], int l, int r, int x){
	if (r>=l){
		int mid=(l+(r-l))/2;
		if (arr[mid]==x){
			return mid+1;
		}
		else if (arr[mid]>x){
			binarry_search(arr, l, mid-1, x);
		}
		else if (arr[mid]<x){
			binarry_search(arr, mid+1, r, x);
		}
		else
			return -1;
	}
}
int main(){
	int arr[50],n,i,x,result;
	printf ("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched:");
	scanf("%d",&x);
	result=binarry_search(arr,0,n-1,x);
	if (result==-1){
		printf ("number not founf in  the array");
	}
	else{
		printf ("FOUND !,,,THE LOCATION IS %d THANK YOU",result);
	}
}
