#include <stdio.h>
double s = 0;
int SIZE = 3;

double sum(double arr[]){

	
	//int arrayLength =  sizeof arr / sizeof *arr;
	//for(int i = 0; i <= arrayLength; i++)

	for(int i = 0; i <= SIZE; i++)
    {
        s = s + arr[i];
    }


	return s;
}

double kvad_sum(double arr[]){

	//int arrayLength = sizeof arr / sizeof *arr;
	//for(int i = 0; i <= arrayLength; i++)

	
	for(int i = 0; i <= SIZE; i++)
    {
        s = s + (arr[i] * arr[i]);
    }


	return s;
	
}

int main(){

	double arr[] = {1.1 , 5.6 , 7.7};

	double x = sum(arr);
	double y = kvad_sum(arr);
	printf("Sum of array elements is: %f \n", x);
	printf("Sum of the square root of the array elements is: %lf\n", y);


	return 0;

}