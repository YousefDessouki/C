
///this code is to reverse a number in C

#include <stdio.h>
#include <math.h>
int main() {
    int x;
    scanf("%d",&x);

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

int reverseanswer = 0;
int playnum=0;

for (int i = 1; i <= nod; i++) 
{
    playnum = (x % (int)pow(10, i));
    playnum=playnum/(int)pow(10,i-1);
    printf("%d\n",playnum);
    reverseanswer=reverseanswer+(playnum*(int)pow(10,nod-i));
}
printf("%d\n",reverseanswer);












}
