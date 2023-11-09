#include<stdio.h>
void main(){
	int i,j,n=1,arr[n],M,m;
	printf("enter limit: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a number: \n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			m=arr[i];
			M=arr[j];
			if(m>M){
				arr[i]=M;
				arr[j]=m;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d, ",arr[i]);
	}
	
	
}
