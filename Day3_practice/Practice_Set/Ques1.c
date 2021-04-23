/* Write a Program to find out whether a student is pass or fail, if it requires total 40% and atleast 33% in each subject to pass, 
Assume 3 
subjects and take marks as an input from the user */

#include<stdio.h>

int main(){
    float total;

    int physics, chemistry, maths;
    printf("Enter physics number\n");
    scanf("%d", &physics);

    printf("Enter Chemistry number\n");
    scanf("%d", &chemistry);

    printf("Enter maths number\n");
    scanf("%d", &maths);

    total= (physics+chemistry+maths)/3;     //let assume marks out of 100

    if((total < 40) || physics < 33 || maths < 33 || chemistry < 33) { // || ya fir or operator  //fail condition 
        printf("your total percentage is %f and you are fail\n", total);

    }

    else {
        printf("your total percentage is %f and you are pass\n", total);
    }

    return 0;
}