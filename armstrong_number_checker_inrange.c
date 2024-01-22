#include <stdio.h>
#include <math.h>
int number_of_digits(int input);
int armstrongnumberchecker(int input);
int armstrongnumberchcekerrange(int lowerlimit, int upperlimit);

int main()
{
    armstrongnumberchcekerrange(23,34);
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
        // printf("This is an armstrong number\n");
    }
    else
    {
        finalchecker=0;
        // printf("This number is not an armstrong number\n");
    }
    return finalchecker;

}

int armstrongnumberchcekerrange(int lowerlimit, int upperlimit)
{
    int max,min;
    max=(lowerlimit>upperlimit)?lowerlimit:upperlimit;
    min=(lowerlimit<upperlimit)?lowerlimit:upperlimit;

    int numberofarmstrongnumbers=0;
    

    for(int i=min;i<max;i++)
    {
        if(armstrongnumberchecker(i))
        {
            numberofarmstrongnumbers++;
            printf("%d",i);

        }
    }
    printf("\n");
    printf("The numbers of armstrong numbers between the deired range %d\n",numberofarmstrongnumbers);
    return numberofarmstrongnumbers;

}