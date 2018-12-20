#include<stdio.h>
#include<stdlib.h>


int swap(int *s, int *b){        //small:s big:b
	int temp=*s;
	*s=*b;
	*b=temp;
	return (*s,*b);

}

int main(){
	int a[10],i,j,n,temp_id;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for (i=0;i<n-1;i++){
		temp_id=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[temp_id]){
				temp_id=j;
				swap(&a[temp_id], &a[i]);
				// temp=a[j];
				// a[j]=a[i];
				// a[i]=temp;


			}

		}

	}

	for (i=0;i<n;i++){
		printf("%d",a[i]);
	}

}
