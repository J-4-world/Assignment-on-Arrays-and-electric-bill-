//Electric bill using prototype 
/*
Author James 
date 15/10/2024
*/
#include<stdio.h>

float charge (float u);
float bill(float b,float s);

   int main (){
   int id;
   float b,c,s,a,u; 
   char n[]={};
   
    printf("Enter name\n",n);
    scanf("%s",&n);
    printf("Enter ID\n",id);
    scanf("%d",&id);
    printf(" Enter the unit consumed is:\n",u);
    scanf("%f",&u);
 
 
 c=charge(u);
 b=u*c;
 s=b*0.15;
 a=bill(b,s);
 
 printf(" The charge per unit is:%f\n",c);
 printf("Your bill is:%f\n",b);
 
 printf("The total amount to pay is:%f",a);
 return 0;
 }
 
 float charge(float u){
  float c;
   if(u<200){
   c=1.20;}
     else if(u<400){
     c=1.50;}
     else if(u<600){
     c=1.80;}
   else {
   c=2.0;}
   return c;
   }
   
   float bill(float b,float s){
    float a,c,u;
     if(b<100){
     a=100;}
     else if(b<400){
     a=b;}
     else{
     a=b+s;}
     return a;
   }
   