/* Calculate the area of a circle and modify the some program to calculate the volume of a 
cylinder given its radius and height */

/* Area of circle = pi*r*r where pi=3.14 */ 

#include<stdio.h>

int main(){
    int radius = 2;
    float pi = 3.14;

    printf("The area of circle is %f\n", pi*radius*radius);
    return 0;
}