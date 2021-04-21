#include<stdio.h>

int main(){
    int x = 2;
    int y = 3;

    printf("the value of 3*x-8*y is %d\n", 3*x-8*y);    //here actually bodmas not happened
    
    /* priority     operators

       1st          * / % 
       2nd          +  - 
       3rd           =

      Note : operators of higher priority are only evaulated first in the absense of parenthesis ()                   
                        
                        */
    printf("the value of 3*x-8*y is %d\n", 3* (x - 8 *y ) );

    printf("the value of 8*y/3*x is %d\n", 8 * y / 3 * x );  /*here by mathematics answer should be 4 but here ans is 16  
    and also priority of operators is same so here we check operator associativity */

    /* Tie broken by assosciativity

    Example:-  X * Y / Z ----> (X*Y)/Z   *, / follows left to right associativity
    Example:-  X / Y * Z ----> (X/Y)*Z   *, / follows left to right associativity

    so for above case 8 * 3 = 24/3*2  ans is 8*2 = 16 */ 



    return 0;
}