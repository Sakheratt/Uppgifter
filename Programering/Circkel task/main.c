#include<stdio.h>
#include"hFile.h"
int main(){

	double r = 0;
	
	printf("Enter Radius: ");
   	scanf("%lf", &r);
	
	double ar = area(r); 
	double om = omks(r);

	printf("\nThe area is %f\n", ar );
	printf("\nThe circumference is %f\n", om);
	return 0;
}