#include <stdio.h>
#include <math.h>
int prime_checker(int input);
int prime_checker_range(int lowerlimit, int upperlimit);
void prime_number_summation(int number);

int main() {

    prime_number_summation(34);
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

int prime_checker_range(int lowerlimit, int upperlimit)
{
    int max,min;
    max=(lowerlimit>upperlimit)?lowerlimit:upperlimit;
    min=(lowerlimit<upperlimit)?lowerlimit:upperlimit;
    int counter=0;
    for(int i=min;i<max;i++)
    {
        if(prime_checker(i))
        {
            counter++;
            printf("%d,",i);
        }

        

    }
    printf("\n");
    printf("The range contains %d prime numbers",counter);
    return counter;
}

void prime_number_summation(int number)
{
    //get all the prime numbers and store them in an array
    int counter=0;
    int x1=0;
    int x2=0;
    for(int i=2;i<=number/2;i++)
    {
         x1=i;
        if(prime_checker(x1))
        {
        //    printf("Found a prime number:%d\n",x1);
           for(int j=2;j<number;j++)
           {
            x2=j;
            if(prime_checker(x2))
            {
                if((x2+x1)==number)
                {
                    printf("%d+%d=%d\n",x1,x2,number);
                }
            }
           }
        }


    }
}

