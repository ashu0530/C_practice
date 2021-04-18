/* Write a program to calculate simple interest for a set of values representing principal, no of years and rate of interest ! */

#include<stdio.h>

int main(){
    int principal;
    int rate;
    int time;
    int SI;

    printf("Enter the pricipal value: ");
    scanf("%d", &principal);
    
    printf("Enter the rate value: ");
    scanf("%d", &rate);

    printf("Enter the time value: ");
    scanf("%d", &time);

    SI = (principal*rate*time)/100;

    printf("The value of simple interest is %d\n", SI );
    return 0;
}