//Electric bill operation 
/*
Author James 
Date 9/10/2024
*/
//preprocessor directive
#include<stdio.h>

 int  main () {
 //Declaration and intialization 
 int ID;
 char name[]={};
 float u,c,b,s,a;
 
 printf("Enter your id number\n",ID);
 scanf("%d",&ID);
 
 printf("Enter your name\n",name);
 scanf("%s",&name);
 
 printf("Enter the units consumed\n",u);
 scanf("%f",&u);
 
 if(  u<200){
 printf("The charge per unit is 1.20\n",c=1.20);}
 
 else if( u<400){
 printf("The charge per unit is 1.50\n",c=1.50);
 }
 
 else if ( u<600){
 printf("The charge per unit is 1.80\n",c=1.80);}
 
 else {
 printf("The charge per unit is 2.00\n",c=2.00);
 }
 b=c*u;{
 if(b<100)
 printf("no charge\n",b=100);}
 printf("The bill is %.2f\n",b);
 
 if(b>400){
 s=b*15/100;
 printf("surcharge %.2f\n",s);}
 
 
 a=s+b;
 printf("The total amount %.2f\n",a);
 
 
 return 0;
 }