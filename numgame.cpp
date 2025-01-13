//C program for Number guessing game 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int random,guess, no_of_guess=0;
	
	srand(time(NULL));
	printf("Welcome to the game of guessing numbers !!! \n");
	random=rand() %100 +1;  //Modular division to print the numbers from 0 to 100 only
	
	do{
		printf("\n\n Please enter your guess number betn (1-100) :");
		scanf("%d",&guess);
		no_of_guess++;
		
	if(guess < random){
			printf("\n Guess the bigger number.");
		}else if(guess > random){
			printf("\n Guess the smaller number.");
		}else{
			printf("Congratulations!!! You have sucessfully guessed the number in %d attempts.",no_of_guess);
	}
	
}while(guess != random);
	printf("\n\n\n ByeBye,Thanks for Playing the Game!!!");
	printf("\n Developed by : Aneesh Codes");
	
	
}