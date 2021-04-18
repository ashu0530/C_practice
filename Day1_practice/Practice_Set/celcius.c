/* Write a program to convert celcius to fahrenheit */


#include<stdio.h>

int main(){
    float celcius, fah;
   
    printf("Enter the value of celsius: ");
    scanf("%f",&celcius);

    fah = (celcius*9/5)+32;

    printf("The fahrenheit of celsius value is %f\n", fah );
    return 0;
}