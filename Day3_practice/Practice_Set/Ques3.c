/* Write a Program to find whether a year entered by the user is a leap year or not. take as an input from the user
1.  If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2.  If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3 . If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4 . The year is a leap year (it has 366 days).
5 . The year is not a leap year (it has 365 days).



 */

#include<stdio.h>

int main(){
    int year;

    printf("Enter the year\n");
    scanf("%d", &year);

    if ( year % 4 == 0 )   {
        printf("This is leap year\n");
    }

    else if ( year % 100 == 0 ) {
        printf("This is leap year\n");
    }

    else if ( year % 400 == 0 ) {
        printf("This is leap year\n");
    }

    else {
        printf("Not leap year\n");
    }
    return 0;
}