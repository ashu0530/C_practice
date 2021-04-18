#include<stdio.h>
int main(){
    int a = 4;
    int b = 8.5;  //not recommended because 8.5 is float number
    float c = 8.5;
    char d = 'A';
    int e = 5;
    float f = 5.5;
    char g[20] = "Helloworld";


    printf("The output of a is %d \n", a);
    printf("The output of b is %f \n", b); //print 0.00000
    printf("The output of b is %d \n", b);
    printf("The output of c is %f \n", c);
    printf("The output of d is %c \n", d);
    printf("The output of int float addition is %f \n", e + f);
    printf("The output of g is %s \n", g);
    return 0;
}