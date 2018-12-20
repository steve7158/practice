#include<stdio.h>
#include<stdlib.h>

int main(){
  int sparce[3][20],i,j,k=0,size;
  int matrix[4][5]=
   {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };


  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
      if(matrix[i][j]!=0){
        size++;
      }
    }
  }

  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
      if (matrix[i][j]!=0){
        sparce[0][k]=i;
        sparce[1][k]=j;
        sparce[2][k]=matrix[i][j];
        k++;
      }
    }
  }
  for (i=0;i<3;i++){
    for(j=0;j<size;j++){
      printf(" %d ",sparce[i][j] );
    }
    printf("\n");
  }
}
_a
