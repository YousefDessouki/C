#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int transposematrix(int** arr,int column,int row);
void print2darray(int** arr, int row, int column);


int main() 
{
    printf("Welcome to the transpose calculator\n");
    printf("please eneter the matrix column\n");
    printf("please eneter the matrix row\n");
    int row,column;
    scanf("%d %d",&column,&row);

    int **arr = (int **)malloc(row * sizeof(int *));
    for(int i=0; i<row; i++)
         arr[i] = (int *)malloc(column * sizeof(int));
    

    for(int i=0;i<row;i++)
    {
       
        for(int j=0;j<column;j++)
        {
             printf("elment a%d%d \n",i+1,j+1);
             scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix that u have enetered is \n");

    print2darray(arr,row,column);
   
    transposematrix(arr,row,column);

     for (int x3=0; x3<row; x3++)
        free(arr[x3]);
    free(arr);


    return 0;

}

int transposematrix(int** arr,int row, int column)
{
    //create a new a array with new parameter being row as column and vice versa
    //the column will be the row and the row will be coulmn

    //this is the dynamic allocation for the array
     int** arr1=(int**)malloc(column*sizeof(int*));///row allocation
     for(int i=0;i<column;i++)
     {
        arr1[i]=malloc(column*sizeof(int*));
     }

     for(int a=0;a<column;a++)
     {
        printf("\n");
        for(int b=0;b<row;b++)
        {
             arr1[a][b]=arr[b][a];
            // printf("%d ", arr[b][a]);
        }
     }
     printf("Transpose matrix is:\n");

     print2darray(arr1,column,row);
     return arr1;
}


void print2darray(int** arr, int row, int column)
{
   for(int x = 0; x < row; x++)
   {
       printf("\n");
       for(int y1 = 0; y1 < column; y1++)
       {
            printf("%d ", arr[x][y1]);
       }
   }
   printf("\n");
}
