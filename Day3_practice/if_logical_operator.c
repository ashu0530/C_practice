#include<stdio.h>

int main(){
    int age;
    int vipPass = 0;
    
    vipPass = 1;
    printf("Enter your age\n");
    scanf("%d",&age);
    

    //if( age <= 70 && age >=18 ) {  //and operator && is true when both condition is true
      if (( age <= 70 && age >= 18) || vipPass==1) 
      //if (( age <= 70 && age >= 18) || !(vipPass==1)) // ! or operator true condition become false vice-versa, || operator is used for or means either this condition is true or this 
      {
        printf("you are above 18 and below 70, you can drive\n");
    }
    else {
        printf("you cannot drive\n");
    }
    return 0;
}