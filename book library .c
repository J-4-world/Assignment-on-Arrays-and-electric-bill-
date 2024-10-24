//program to calculate amount 
/*
Author James kamau
Date 📅
*/
#include<stdio.h>
#include<conio.h>
int main(){
int id,d,r,F,A;
    printf("Enter the book ID\n");
    scanf("%d",&id);
    
    
    printf("Enter the duedate\n");
    scanf("%d",&d);
    
    printf("Enter the returndate\n");
    scanf("%d",&r);
    
   F=r-d;
    
    printf("The days overdue is %d\n",F);
    
    if(F<=7){
    printf("The charge for the book is KSH 20\n",r=20);}
    
    
      else if(F>7 && F<15){
      printf("The charge for the book is KSH 50\n",r=50);}
      
      
      
      else{
      printf("The charge is KSH 100\n",r=100);}
      
       
      A=F*r;
      printf("The amount %d",A);
      
      return 0;
  }    
      
      