#include<stdio.h>
#include <stdbool.h>

void main (){

	bool girl = false;
	int N = 10;

	long long int personalNumber[N];
	int gender = 0;



do{



	
	printf("Are u a girl(1) or boy(0)? ");
	scanf("%d", &gender);

	if (gender == 0){
		printf("You have entered a man!\n");
	}

	else if(gender == 1){
		printf("You have entered a woman!\n");
	}

	printf("enter personal Number: ");

	for(int i = 1; i <= N; i++)  
    {  
	    
        scanf("%lld", &personalNumber[i]);  
    }


   
   if(personalNumber[N-1] % 2 == 0 && gender == 1){

   		girl = true;
   		printf("You are a wonman!\n");
   		printf("Have a nice day!\n");

   }

   else if (personalNumber[N-1] % 2 == 1 && gender == 0){
   		girl = true;

   		printf("You are a man!\n");
   		printf("Have a nice day!\n");
   }

   else{
   	girl = false;

   	printf("Start over again\n");
   }





}while(girl = false);


	
    



}