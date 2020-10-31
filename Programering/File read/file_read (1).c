#include <stdio.h>
#include <stdlib.h>

int N = 100;

int main(){

	char fileLine[N];

	FILE *filePointer;

	filePointer = fopen("fileTest.txt", "r");

	while(!feof(filePointer)){
		fgets(fileLine, N , filePointer);
		puts(fileLine);
	}



	fclose("filePointer");





	return 0;
}