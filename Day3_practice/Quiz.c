/* Write a Program to find grade of a student given his marks based on below :

90-100 - A
80-90 - B
70-80 - C
60-70 - D
< 70  - F */

#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks\n");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100) {
        printf("Your grade is A\n");
    }

    else if ( marks>=80 && marks<=90) {
        printf("Your grade is B\n");
    }

    else if ( marks>=70 && marks<=80) {
        printf("Your grade is C\n");
    }

    else if ( marks>=60 && marks<=70) {
        printf("Your grade is D\n");
    }

    else if ( marks < 70 && marks >= 0) {
        printf("Your grade is F\n");
    }



    return 0;
}