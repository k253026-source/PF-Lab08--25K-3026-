#include <stdio.h>
 int main() {
 	int arr[3][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
 	int i,j,max,x,y;
 	for(i=0;i<3;i++) {
 			printf(" |");
 		for(j=0;j<4;j++) {
 	     printf(" %d ",arr[i][j]);
		 } 	printf("|");
		 printf("\n");
	 }  
	 for(i=0;i<3;i++) {
 		for(j=0;j<4;j++) {
 			if(arr[i][j]>max) {
 				max=arr[i][j];
 				x=i+1,y=j+1;
			 }
		 } 
	 }     printf("\nThe Index is arr[%d][%d]",x,y);
	       printf("\nTheir Maximum Number is :%d",max);
 	
 	return 0;
 }
