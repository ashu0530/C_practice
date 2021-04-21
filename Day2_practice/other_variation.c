#include<stdio.h>

int main(){
    //float b = a + 8.9;
    float a = 1.1;        //cannot run caused a is not declared first
    float b = a + 8.9;

    printf("the value of b is %f\n", b);
    return 0;
}