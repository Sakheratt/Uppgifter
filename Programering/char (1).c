
#include <stdio.h>
#include <string.h>

int N = 100;
 
int main()
{
    char str[N];  
    int i , stringLength , x = 0;
 
    printf("Ange en text please : ");
    gets(str);
    stringLength = strlen(str);
 
    for(i = 0; i < stringLength / 2; i++)  
    {
    	if(s[i]== s[stringLength - i - 1])
    	x++;
 
 	}
 	if(x == i)
 	    printf("Teksten är palindrom!");
    else
        printf("Teksten är inte palindrom!");
 
 	 
     
    return 0;
}