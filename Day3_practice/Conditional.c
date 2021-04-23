/* Decision making instruction in C 

if-else statement , Switch statement */

/* if-else statement 

if (condition to be checked) {
    statement-if-condition-true;
}
else {
    statement-if-condition-false;
}        

*/

// program who tell number is even or odd
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the number\n");
    scanf ("%d", &a);

    if (a%2==0){                           //if input number is divisible by 2 and remainder is zero then it is even else odd
        printf("%d is even\n",a);
    }
    else {
        printf("%d is odd\n",a);
    }
    return 0;
}