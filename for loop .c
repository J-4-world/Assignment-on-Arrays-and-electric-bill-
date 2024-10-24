//for loop
/*
Author James 
Date 9/10/24
*/

//preprocessor directive 

#include <stdio.h>
int main  (){
  int start,stop ,sum=0;
  
  printf("Enter the start value,");
  scanf("%d",&start);

  printf("Enter the stop value,");
  scanf("%d",&stop);
  
  for(int i=start;i<=stop;i++){
  printf("%d\n",i);

  sum+=i;}

  printf("sum is %d",sum);






 return 0;

}
