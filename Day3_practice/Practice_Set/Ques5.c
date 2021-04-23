/* Write a program to find greatest of four numbers entered by the user */

#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;

    printf("Enter the number1\n");
    scanf("%d", &num1);

    printf("Enter the number2\n");
    scanf("%d", &num2);

    printf("Enter the number3\n");
    scanf("%d", &num3);

    printf("Enter the number4\n");
    scanf("%d", &num4);

    if ( num1 > num2 && num1 > num3 && num1 > num4 ){
        printf(" %d : num1 is greater number\n", num1);
    }

    else if ( num2 > num1 && num2 > num3 && num2 > num4 ){
        printf(" %d : num2 is greater number\n", num2);
    }

    else if ( num3 > num1 && num3 > num2 && num3 > num4 ){
        printf(" %d : num3 is greater number\n", num3);
    }

    else {
        printf(" %d : num 4 is greater number\n", num4);
    }


    return 0;
}