#include<stdio.h>

int main(){
    int  a;
    printf("Enter a\n");
    scanf("%d", &a);

    // Syntax of ternary operator Condition? expession-if-true : expression-if-false

    (a<5)? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}