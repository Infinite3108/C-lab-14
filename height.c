#include<stdio.h>
void main(){
	int i,h[5],w[5];
	
	for(i=0;i<5;i++){
		printf("enter a height(in cm) and weight in Kg: \n");
		scanf("%d %d",&h[i],&w[i]);
	}
	for(i=0;i<5;i++){
		if(h[i]>170 && w[i]<50){
			printf("person-%d\nHeight : %d\nWeight : %d\n",i+1,h[i],w[i]);
		}
	}
}
