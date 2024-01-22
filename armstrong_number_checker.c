#include <stdio.h>
#include <math.h>
int number_of_digits(int input);
int armstrongnumberchecker(int input);
int main()
{
    armstrongnumberchecker(371);
}


int number_of_digits(int x)
{
    int checker=0;
    int flag=1;
    int nod=0;

    while(flag==1)
    { 
        nod++;
        checker=x/pow(10,nod);
        if(checker==0)
        {flag=0;}
 
    }
    // printf("the number contains %d digits\n",nod);
    return nod;
}

int armstrongnumberchecker(int input)
{
    int nod=number_of_digits(input);
    int playnum=0;
    int sum_checker=0;
    for (int i = 1; i <= nod; i++) 
    {
    playnum = (input % (int)pow(10, i));
    playnum=playnum/(int)pow(10,i-1);
    sum_checker=sum_checker+(int)pow(playnum,nod);
    }
    int finalchecker=0;
    if(sum_checker==input)
    {
        finalchecker=1;
        printf("This is an armstrong number\n");
    }
    else
    {
        finalchecker=0;
        printf("This number is not an armstrong number\n");
    }
    return finalchecker;

}