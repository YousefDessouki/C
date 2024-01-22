#include <stdio.h>
#include <math.h>
int main() {
    int input;
    printf("Please enter the number\n");
    scanf("%d",&input);
    int nod=0;
    for(int i=1;i<input;i++)
    {
        if(!(input%i))nod++;
    }
    int prime_checker=0;
    if(nod>1)
    {
        prime_checker=0;
        printf("this number is not prime\n");
    }
    else
    {
        prime_checker=1;
        printf("this number is prime\n");
    }
}