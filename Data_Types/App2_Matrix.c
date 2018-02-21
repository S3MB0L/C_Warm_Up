#include <stdio.h>

main()
{
  int matrix[3][3]={1,2,3,4,5,6,7,8,9};

  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
        printf("mat[%d][%d]=%d\n",i,j,matrix[i][j]);
      }
  }
  printf("\n");
  printf("Matrix =\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }

int a1=matrix[0][0];
int a2=matrix[0][1];
int a3=matrix[0][2];
int b1=matrix[1][0];
int b2=matrix[1][1];
int b3=matrix[1][2];
int c1=matrix[2][0];
int c2=matrix[2][1];
int c3=matrix[2][2];

int determinant=a1*(b2*c3-b3*c2)+b1*(c2*a3-a2*c3)+c1*(a2*b3-b2*a3);
printf("determinant=%d\n",determinant);

}
