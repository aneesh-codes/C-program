//Pyramid Number Pattern In C 

#include<stdio.h>
int main(){
	int i,j,k,sp=5;
	
	for (i=1;i<=9;i=i+2){
		for(k=1;k<sp;k++){
			printf(" ");
		}
			for(j=1;j<=i;j++){
				printf("%d",j);
			}
				printf("\n");
				sp--;
	}
		
	}
