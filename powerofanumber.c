#include <stdio.h>
#include <math.h>
int main() {
    int base,exponent;
    printf("please enter the base and the exponent\n");
    scanf("%d %d",&base,&exponent);
    int finalanswer=1;
    for(int i=0;i<exponent;i++)
    {
        finalanswer=finalanswer*base;

    }
    printf("%d\n",finalanswer);
}
