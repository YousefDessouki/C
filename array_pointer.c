#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Please enter the size of the array and its components\n");
    int size;
    scanf("%d", &size); // Use %d and &size

    // Dynamic memory allocation for the array
    int* arr = (int*)malloc(size * sizeof(int)); // Allocate memory for int not int*

    // Now append the array elements
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Use &arr[i]
    }

    // Print the array to make sure that your code is working fine
    // for(int j = 0; j < size; j++)
    // {
    //     printf("%d ",arr[j]); // Add a space for readability
    // }

    //make a pointer
    int *ptr;
    ptr=arr;

    for(int h=0;h<size;h++)
    {
        printf("%d\n",ptr[h]);
        
    }

    // Don't forget to free the allocated memory
    free(arr);

    return 0;
}
