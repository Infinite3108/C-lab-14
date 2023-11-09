#include<stdio.h>
void main(){
	int i,j,n=1,d=0,D[n];
	printf("enter limit: \n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter a number: \n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(D[j]==arr[i]){
				i++;
				
			}
			else{
			D[i]=arr[i];
		}
		}
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				d++;
			}
			
		}
	}
	printf("Total duplicate elements: %d",d);	
}

