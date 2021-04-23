#include<stdio.h>

int main(){
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);

/* The behaviour of switch is where any case is match then all the case run, so here we use break keywoard statement for exiting the case if it is match with condition, no other case will run */

    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");
        break;
    case 2:
        printf("your rating is 2\n");
        break;
    case 3:
        printf("your rating is 3\n");
        break;
    case 4:
        printf("your rating is 4\n");
        break;            
    case 5:
        printf("your rating is 5\n");
        break;    
    
    default:
        printf("invalid rating\n");
        break;
    }


    return 0;
}