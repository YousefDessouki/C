#include <stdio.h>

int GCD_positive_integer(int input1, int input2);
int hcf_recursive(int n1, int n2);
int HCF(int n1, int n2);

int main() 
{
  int input1,input2;
  printf("please enter the input\n");
  scanf("%d %d",&input1 ,&input2);
  hcf_recursive(input1,input2);

  
}


//needs extra reserach to refine the algotrithm
int GCD_positive_integer(int input1, int input2)
{
  int max,min,flag;
  max=(input1>input2)?input1:input2;
  min=(input2<input1)?input2:input1;
  flag=max-min;
  printf("%d\n",flag);
  printf("%d\n",max);
  printf("%d\n",min);
  int firstanswer=min-flag;
  int abs_firstanswer;
  abs_firstanswer=(firstanswer>0)?firstanswer:firstanswer*-1;
  printf("%d\n",abs_firstanswer);
  int firstchecekr,secondchecker;
  firstchecekr=abs_firstanswer/min;
  secondchecker=abs_firstanswer/max;
  printf("%d\n",firstchecekr);
  printf("%d\n",secondchecker);
  // int finalanswer;
  // finalanswer=(firstchecekr>secondchecker)?firstchecekr+1:secondchecker+1;
  // printf("%d\n",finalanswer);
  return 1;


}

int hcf_recursive(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

int HCF(int n1, int n2)
{
  int gcd=0;
  for(int i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

return gcd;
}