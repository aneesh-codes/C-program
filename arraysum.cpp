//C program for inputing 3*4 matrix and finding the sum of each row and column seprately

#include<stdio.h>
int main(){
	int a[3][4],i,j,sum=0;
	printf("Enter the values for 3*4 matrix : \n ");
	
//Taking Input
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
//Printing Output for row 
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("\t %d\t",a[i][j]);
			sum=sum+a[i][j];
		}
			
			printf("\n Sum of row %d = %d",i,sum);
			sum =0;
	}
	
//Printing Output for Column
	printf("\n\n\n\n\n");
	for(j=0;j<4;j++){
		for(i=0;i<3;i++){
//			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
			printf("\n Sum of column %d = %d",j,sum);
			sum = 0;
	}
}