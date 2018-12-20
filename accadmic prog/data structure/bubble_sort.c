#include <stdio.h>
int main(){
	int arr[50],i,temp,n,j;
	printf("enter the size of array");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++){
		for(j=1;j<n;j++){

			if (arr[j]<arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
	}
	printf("the sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}


