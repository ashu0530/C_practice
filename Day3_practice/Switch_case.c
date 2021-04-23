#include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating (1-5)1\n");
    scanf("%d", &rating);

/* In switch we generally use when we have to make a choice between number of alternatives for a given variable 

In this below programming i made a rating program which have some issue mean if we run this program then enter any number between 1 to 
5 it display all the remaining rating with invalid why this happening because we don't use break statement . */

    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");
    case 2:
        printf("your rating is 2\n");
    case 3:
        printf("your rating is 3\n");
    case 4:
        printf("your rating is 4\n");            
    case 5:
        printf("your rating is 5\n");    
    
    default:
        printf("invalid rating\n");
        
    }


    return 0;
}