#include<stdio.h>
#include<stdlib.h>

int largest_elment_in_array(int *arr, int size);
int main()
{
    int size;
    printf("please enter the number of number\n");
    scanf("%d",&size);

    //make an array of a size equal to that inputted by the user.
    int* arr=(int*)malloc(size*(sizeof(int*)));

    //append the data
    for(int i=0;i<size;i++)
    {
        printf("The number %d:\n",i+1);
        scanf("%d",&arr[i]);
    }

    ///find the largest elment
    int largest;
    largest=largest_elment_in_array(arr,size);
    printf("The largest elment is :%d\n",largest);



}

int largest_elment_in_array(int *arr, int size)
{
    int largest=arr[0];
    for(int i=0;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }

    }
return largest;
}