//do while question 
/*
Date 9/10/24
Author James 
*/
//preprocessor directive 
#include<stdio.h>
int main(){
    
    
    int start,stop,sum=0;
    
    
    printf("Enter your start value:");
    scanf(" %d" ,& start);
    

    printf("Enter your stop value:");
    scanf(" %d" , & stop);
    
    do{ 
    printf("%d\n",start);
    sum=sum+start;
     start++;
    
    }
    while(start<=stop);
    
    printf("sum:%d",sum);

 return 0;

}
   