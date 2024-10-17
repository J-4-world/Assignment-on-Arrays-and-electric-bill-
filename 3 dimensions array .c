//2 dimension array
/*
 Author james kamau
 sate 15/10/2024
*/



#include<stdio.h>
  int main () {
   int i,j,k;
  int marks [2][3][3]={{{59,35,45},{34,87,65}},{{25,35,76},{56,67,78}}};
   for(i=0;i<2;i++){
   for(j=0;j<2;j++){
    for(k=0;k<3;k++){

   printf("marks[%d][%d][%d]=[%d]\n",i,j,k,marks[i][j][k]);

}

     }





  }

return 0;
   }
