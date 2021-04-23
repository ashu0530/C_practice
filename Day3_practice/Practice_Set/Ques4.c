/* Write a program to determine whether a character entered by the user is lower case or not 

65-90 Uppercase
97-122 lowercase */

#include<stdio.h>

int main(){
    char ch;   //97-122  a-z

    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >=97) {
        printf("The character is lowercase\n");
    }
    else {
        printf("The character is uppercase\n");
    }
    return 0;
}