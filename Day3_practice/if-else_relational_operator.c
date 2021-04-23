#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    // if( age >= 90) {  greater than and equal to
    // if( age !=90)  {  not equal to 90

    if( age > 90 ) {
        printf("you are above 90, you can't drive\n");
    }
    else {
        printf("you can drive\n");
    }

    if (age==50){   //== eqyuality operator = is assignment operator so here non zero is true in c language
        printf("half century\n");
    }
    return 0;
}