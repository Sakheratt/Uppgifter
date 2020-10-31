#include <stdio.h>

#define TRUE 1
#define FALSE 0

int num = 4; // supposed to be dynamic NOT static


void test(double expected, double actual, char* testName);
void small_felt(double arr[]);
void big_felt(double arr[]);

void main(){

	double arr[] = {745.2, 1023 , 333.5 , 66.6};
	small_felt(arr);
	big_felt(arr);	

	test(arr[3], 66.6, "small value test");
	test(arr[1], 1023, "big value test");
}

void small_felt(double array[]){

	// int num = sizeof(arr)/sizeof(arr[0]);

	double smallest = array[0];

	//for (int i = 0; i < num; i++)
 
   	for (int i = 0; i < num; i++) {
      if (array[i] < smallest) {
         smallest = array[i];
      }
   	}

   printf("The smalled Value is %f\n",smallest);

}

void big_felt(double array[]){

	// int num = sizeof(arr)/sizeof(arr[0]);

	double biggest = array[0];

	//for (int i = 0; i < num; i++)
 
   	for (int i = 0; i < num; i++) {
      if (array[i] > biggest) {
         biggest = array[i];
      }
   	}

   printf("The smalled Value is %f\n",biggest);

}

void test(double expected, double actual, char* testName){
 	if(expected == actual){
		printf("\n%s passed", testName);	
	}
 	else{
		printf("\n%s Failed expected: %d actual %d", testName, expected, actual);
 	}
 }