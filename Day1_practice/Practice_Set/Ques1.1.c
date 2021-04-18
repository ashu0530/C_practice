/* Write a C program to calculate area of rectangle by taking user input */

/* Area of rectangle = length and breadth */



#include<stdio.h>

int main(){
    int length;
    int breadth;

    printf("Enter the value of length\n");
    scanf("%d", &length);

    printf("Enter the value of breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d\n", length*breadth); 
    return 0;
}