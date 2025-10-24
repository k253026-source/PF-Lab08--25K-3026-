#include <stdio.h>
int main() {
	int r,sum=0;
	printf("Enter the number you print :");
	scanf("%d",&r);
	int i,j;
   for(i=1;i<=r;i++) {
   	printf("%d:",i);
		for(j=1;j<=10;j++) {
		  sum = i*j;
		   printf("%4d",sum);
	}   
	printf("\n");
	        
}   
	return 0;
}

