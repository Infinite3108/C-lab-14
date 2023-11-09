#include<stdio.h>
#include<math.h>
void main(){
	int i,n=1,arr[n],m=1;
	float s=0,a,h,g;
	printf("enter limit: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number : \n");
		scanf("%d",&arr[i]);
		s+=arr[i];
		m*=arr[i];
		}
		
		a=s/n;
		g=pow(m,1/n);
		h=m/a;
		printf("average mean: %.2f\nGeomatric mean: %.2f\nHarmonic mean: %.2f",a,g,h);
	}
		
