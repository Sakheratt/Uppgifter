#include<stdio.h>

int coast(float priceNovat, float vat){
   
    float x = vat / 100; // 25 / 100 = 0.25
    float m = priceNovat * x; // 100 * 0.25 = 25
    float total = priceNovat - m;   // 100 - 25 = 75
    return total;
}


int main(){
     

    float x = coast(600, 25);
   
    printf("%lf\n", x);

    return 0;
}