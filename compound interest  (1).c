//variable and Data type 
//preprocessor directive - printf() , scanf()
//program to calculate compound interest
/*
program to calculate the compound interest 
Author James kamau CT101/G/22692/24
Date 23/9/2024
*/

//declaration and initialization 

#include <stdio.h>
#include <math.h>
int main (){

   float principle,p;
   float rate ,r;
   float timeofyears,t;
   float numberoftimescompoundedannually,n;
   float Amount,A;
   float interest,i;
   
   
   printf("Enter the principle,p \n");
   scanf("%f",& p);
   
   printf("Enter the rate,r \n");
   scanf("%f", &r);
   
   r=r/100;
   
   printf("Enter the timeofyears,t\n");
   scanf("%f",&t);
   
   printf("Enter the timecompoundedannually,n\n");
   scanf("%f" ,&n);
   
   A=p*pow( ( 1 + (r/n)),n*t);
   
   i=A - p;
   
   
   printf("The interest is %.2f",i);
   
   
   
 return 0;

}