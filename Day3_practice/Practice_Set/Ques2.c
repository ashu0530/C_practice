/* Calculate income tax paid by an employee to the goverment as per the slabs mentioned below:

income slab            tax
2.5 - 5.0 lakh           5%
5.0 - 10.0 lakh           20%
above 10.0 lakh             30%  */

#include<stdio.h>

int main(){
    float tax = 0;  //assume initially person giving tax is 0
    float income; //income variable for taking input

    printf("Enter your income\n");
    scanf("%f", &income);

    /*if income is greater than 2.5 l and less than 5.0 lakh then tax will increment 5 % which is 0.05 how 5/100 = 0.05 % of
    given income of user so multiply and - subtract of 250000 because starting 2.5 lakh user dont have to pay tax. Example if someone 
    3lakh is earning per annumn but he only give on 50000 tax not on 300000*/


    if (income >= 250000 && income <= 500000) {
        tax = tax+0.05 * (income-250000);
    }

    if (income >= 500000 && income <= 1000000) {
        tax = tax+0.20 * (income-500000);
    }

    if (income >=  1000000) {
        tax = tax+0.30 * (income-1000000);
    }

    printf("your net income tax to be paid is %f\n", tax);


    return 0;
}