#include <stdio.h>
#include <math.h>

int factorsofanumber(int number);

int main()
{
    factorsofanumber(6);
}


int factorsofanumber(int number)
{
    int factorsnumber=0;
    for(int i=1;i<number;i++)
    {
        if(!(number%i))
        {
            factorsnumber++;
            printf("%d,",i);
        }
    }
    printf("\n");
    printf("The number of the factors is %d\n",factorsnumber);
    return factorsnumber;

}