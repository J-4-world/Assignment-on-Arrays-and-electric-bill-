// variable and Data type
//preprocessor directive - printf() ,scanf()
#include <stdio.h>
int main() {
//declaration and initialization
   float principle,p;
   float rate ,r;
   float time,t;
   float interest,i;
   
   printf("Enter your principle ,p\n");
   scanf(" %f", &p);
   
   
   printf("Enter your rate,r\n");
   scanf(" %f",&r);
   
   
   printf("Enter time ,t \n");
   scanf("%f",&t);
   
   
   i=(p*r*t)/100;
   printf("The interest is %.2f",i);
   
   
   return 0;
   













}