//Preparing simple calculator using C program 

#include<stdio.h>
#include<math.h>

void print_menu();
double modulus(int,int);
	int main(){
		int choice;
		double first,second,result;
		
		while(1){
			print_menu();
			scanf("%d",&choice);
			if (choice == 7){
				break;
		}
			if (choice > 7){
				printf("Enter the option from 1-7 only !!!");
		}else{
			
			printf("\nPlease enter the first number: ");
		    scanf("%lf", &first);
		    printf("\n Now, enter the second number: ");
		    scanf("%lf", &second);
	
		}

	
    switch (choice)
    {
      case 1: // Add
        result = first + second;
        printf("\n Result of Operation : %.2f",result);
        break;
      case 2: // Subtract
        result = first - second;
        printf("\n Result of Operation : %.2f",result);
        break;
      case 3: // Multiply
        result = first * second;
        printf("\n Result of Operation : %.2f",result);
        break;
      case 4: // Divide
        result =  first / second;
        if(second == 0){
        	printf("Answer is 0.");
		}else{
			printf("\n Result of Operation : %.2f",result);	
		}
    break;
    case 5: // Modulus
        result = modulus(first,second);
        printf("\n Result of Operation : %.2f",result);
        break;
      case 6: // Power
        result = pow(first, second);
        printf("\n Result of Operation : %.2f",result);
        break;
   
}
    
	}

		}
		
		
		void print_menu(){
			printf("\n\n\n Welcome to Simple Calculator.\n");
			printf("\n Choose one of the following operations : ");
			printf("\n 1. Add \n 2. Subtract \n 3. Multiplication \n 4. Division \n 5. Modulus");
			printf("\n 6. Power \n 7. Exit of Program \n");
		}	
		
		double modulus(int a,int b){
			
				return a % b;
		
		}