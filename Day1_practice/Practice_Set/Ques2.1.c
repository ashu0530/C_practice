/* Calculate the area of a circle by user input */

/* Area of circle = pi*r*r where pi=3.14 */ 

#include<stdio.h>

int main(){
    int radius;
    float pi=3.14;

    printf("Enter the value of radius\n");
    scanf("%d", &radius);

    printf("The area of circle is %f\n", pi*radius*radius);
    return 0;
}