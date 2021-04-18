#include<stdio.h>

int main(){
    float radius;
    float height;
    float pi = 3.14;

    printf("Please enter radius value\n");
    scanf("%f",&radius);

    printf("please enter height value\n");
    scanf("%f",&height);

    printf("volume of cylinder is %f", pi*radius*radius*height);
    return 0;
}