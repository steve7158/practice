#include <stdio.h>
#include<stdlib.h>


int main(){
	int a[10],i,j,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}


	for(i=0;i<n;i++){
		if(a[i+1]<a[i]){
			for(j=0;j<n;j++){
				if(a[i+1]<a[j]){
					temp=a[i+1];
					a[i+1]=a[j];
					a[j]=temp;
				}
			}
		}
	}


	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

