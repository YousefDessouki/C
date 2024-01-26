#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print2darray(int** arr, int row, int column);
void multiplication_matrix(int** arr,int row,int cols ,int** arr1,int row1,int cols2);
int get_rowsize(int** arr);
int get_colsize(int** arr);

int main() 
{
    printf("Welcome to the transpose calculator\n");
    printf("please eneter the matrix column\n");
    printf("please eneter the matrix row\n");
    int row,column;
    scanf("%d %d",&column,&row);

//dynamic allocation for the first matrix
    int **arr = (int **)malloc(row * sizeof(int *));
    for(int i=0; i<row; i++)
         arr[i] = (int *)malloc(column * sizeof(int));
    
    for(int i1=0;i1<row;i1++)
    {
       
        for(int j=0;j<column;j++)
        {
             printf("elment a%d%d \n",i1+1,j+1);
             scanf("%d",&arr[i1][j]);
        }
    }

    printf("The matrix that u have enetered is \n");

    print2darray(arr,row,column);

printf("\n");
    ///second matrix allocation and input
   printf("please enter the second matrix column\n");
printf("please enter the second matrix row\n");
int roq, columq;
scanf("%d %d", &columq, &roq);

//dynamic allocation for the second matrix
int **arr2 = (int **)malloc(roq * sizeof(int *));
for(int p=0; p<roq; p++)
    arr2[p] = (int *)malloc(columq * sizeof(int));

for(int k=0; k<roq; k++)
{
    for(int w=0; w<columq; w++)
    {
        printf("element a%d%d \n", k+1, w+1);
        scanf("%d", &arr2[k][w]);
    }
}

printf("The matrix that you have entered is \n");

print2darray(arr2, roq, columq);

   
    if(column==roq)
    {
        multiplication_matrix(arr,row,column,arr2,roq,columq);
    }
    else if(column!=roq)
    {
        printf("You have entered 2 asymetric matrices that can not be multiplied.Kindly recheck your inputs and try again\n");
    }

    return 0;
   

}


void multiplication_matrix(int** arr,int row,int cols ,int** arr1,int row1,int cols2)
{
    //make the array for the result by allocating the memory 
    int** answer=(int **)malloc(row*sizeof(int*));//for the rows
    for(int i=0;i<row;i++)
    {
        answer[i]=(int*)malloc(cols2*sizeof(int));
    }

    //assigning the values of the result
    int sum=0;
    for(int j=0;j<row;j++)
    {
       
        printf("\n");
        for(int k=0;k<cols2;k++)
        {
            answer[j][k]=answer[j][k]+(arr[j][k]*arr1[k][j]);
            
        }
    }

    print2darray(answer,row,cols2);

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
int get_rowsize(int** arr)
{
//needs extra R&D
return 0;


}
int get_colsize(int** arr)
{
    //needs extra R&D
    return 0;

}
