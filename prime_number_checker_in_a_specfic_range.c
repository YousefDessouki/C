#include <stdio.h>
#include <math.h>
int prime_checker(int input);

int main() {
    int range1,range2;
    printf("Please enter the upper range and the lower range\n");
    scanf("%d %d",&range1, &range2);
    int counter=0;
    for(int i=range1;i<range2;i++)
    {
        if(prime_checker(i))
        {
            counter++;
            printf("%d,",i);
        }

        

    }
    printf("\n");
    printf("The range contains %d prime numbers",counter);

    return 0;
}


int prime_checker(int input)
{
    int nod=0;
    for(int i=1;i<input;i++)
    {
        if(!(input%i))nod++;
    }
    int prime_checker=0;
    if(nod>1)
    {
        prime_checker=0;
        // printf("this number is not prime\n");
    }
    else
    {
        prime_checker=1;
        // printf("this number is prime\n");
    }
    return prime_checker;
}