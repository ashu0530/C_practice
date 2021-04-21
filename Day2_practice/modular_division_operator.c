#include<stdio.h>
#include<math.h>

int main(){
    printf(" 5 when divided by 2 leave a remainder of %d\n", 5%2);
    printf(" -5 when divided by 2 leave a remainder of %d\n", -5%2); //sign is same as of numerator
    printf(" 5 when divided by -2 leave a remainder of %d\n", 5%-2);
    printf(" -5 when divided by -2 leave a remainder of %d\n", -5%-2);

    // bitwise_xor operator, it is not exponential operator so it is not present any operator in c by default


    printf(" %d\n", 5^4);    //result is 1 ^ bitwise_xor operator

    // if you want to use exponential result or power result we can use pow function deliver by math.h library

    printf("%f\n", pow(2,5));



    return 0;
}