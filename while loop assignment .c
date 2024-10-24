//while loop
/*
Date 9/10/24
Author James 
*/
#include<stdio.h>
int main(){
    
    
    int start,stop,sum=0;
    
    
    printf("Enter your start value:");
    scanf(" %d" ,& start);
    

    printf("Enter your stop value:");
    scanf(" %d" , & stop);
    
    while(start<=stop){
    printf("%d\n",start);
    sum=sum+start;
     start++;
    
    }
    
    printf("sum:%d",sum);

 return 0;

}
   