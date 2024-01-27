#include<stdio.h>
#include<stdlib.h>
void swapping_numbers_by_pointers(int *x,int *y,int *z);
int main()
{
int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    swapping_numbers_by_pointers(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);



}

void swapping_numbers_by_pointers(int *x,int *y,int *z)
{
int temp;
temp=*x;
*x=*y;
*y=*z;
*z=temp;

}