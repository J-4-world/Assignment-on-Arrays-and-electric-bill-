//preprocessor directive
/*
author James kamau
Date 1\10\2024
*/
#include<stdio.h>
int main(){
    
    char a; //%c
    char name [] ={} ; //%s
    int age ; //%d
    float salary ;//%f
    
    printf("Enter your character\n");
    scanf("%c",& a);
    printf("your character is %c\n", a);
    
    printf("Enter your name\n");
    scanf(" %s" ,& name);
    printf("your name is %s \n" ,name);

    printf("Enter your age\n ");
    scanf(" %d" , & age);
    printf("your age is %d \n" ,age);

    printf("Enter your salary\n");
    scanf("%f" , & salary);
    printf("your salary is %f" ,salary);












return 0;

}
   