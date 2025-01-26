//sum of 2 matrix 

#include<stdio.h>
int main(){
	int a[3][3],sum[3][3],b[3][3];
	
//1st matrix
	printf("Enter the numbers for 1st matrix : \n ");
	for (int i = 0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
//2nd matrix	
	printf("Enter the numbers for 2nd matrix : \n ");
	for (int i = 0;i<3;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
//sum of 2 matrix
	printf("Sum of 2 matrix  : \n ");
		printf("Enter the numbers for 1st matrix : \n ");
	for (int i = 0;i<3;i++){
		for (int j=0;j<3;j++){
			sum [i][j] = a[i][j]+b[i][j];
			printf("%d",sum[i][j]);
		}
			printf("\n");
	}

}
