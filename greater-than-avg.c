#include<stdio.h>
void main(){
	int i,n=1,arr[n];
	float s=0;
	printf("enter limit: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter a number: \n");
		scanf("%d",&arr[i]);
		s+=arr[i];
	}
	printf("numbers greater than %.2f are :\n",s/n);
		for(i=0;i<n;i++){
		if(arr[i]>s/n){
			printf("%d\n",arr[i]);
		}
	}
}
