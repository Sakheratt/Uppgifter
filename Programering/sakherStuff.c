#include <stdio.h>

int main(){
	

	float gallon = 0;
	float mil = 0;


    printf("Enter how many gallons: ");
    scanf("%f", &gallon);


    printf("you have inserted %f gallons    ", gallon);
    
    float liter = gallon * 3.785;

    printf("= %f Liters ", liter);


    printf("\nEnter the miles: ");
    scanf("%f", &mil);


    printf("you have inserted %f miles     ", mil);

    float km = mil * 1.609;
    printf("=  %lf KM ", km);

     



	return 0;
}