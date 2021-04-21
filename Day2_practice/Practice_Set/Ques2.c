/* write a program to check whether a number is divisible by 97 or not ? */


#include<stdio.h>

int main(){

    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Number divisibility test return : %d\n", num%97);  //if result is 0 then divisible
    return 0;
}