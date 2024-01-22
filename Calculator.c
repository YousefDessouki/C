#include <stdio.h>
#include <math.h>


int main()
{
   printf("welcome to the calculator\n");
   printf("\n");

   printf("Please be advised for the operations \n");
   printf("\n");

   printf("1 is for addtion,2 for subtraction,3 for multiplication, 4 for division\n");
   printf("\n");

   printf("press 8 to exit the calculator\n");
   printf("\n");

   int switchcal=1;
   while(switchcal)
   {
   int operation_command=0;
   scanf("%d",&operation_command);

   float input1,input2;
   float answer;

   switch(operation_command)
   {
    case 1:
    printf("Addition process\n");
    printf("please enter the numbers\n");
    scanf("%f",&input1);
    scanf("%f",&input2);
    answer=input1+input2;
    printf("Answer:%.3f\n",answer);
    break;

    case 2:
    printf("Subtraction process\n");
    printf("please enter the numbers\n");
    scanf("%f",&input1);
    scanf("%f",&input2);
    answer=input1-input2;
    printf("Answer:%.3f\n",answer);
    break;

    case 3:
    printf("Multiplication process\n");
    printf("please enter the numbers\n");
    scanf("%f",&input1);
    scanf("%f",&input2);
    answer=input1*input2;
    printf("Answer:%.3f\n",answer);
    break;
    
    case 4:
    printf("Division process\n");
    printf("please enter the numbers\n");
    scanf("%f",&input1);
    scanf("%f",&input2);
    answer=input1/input2;
    printf("Answer:%.3f\n",answer);
    break;

    default:
    printf("Wrong command\n");
    break;
   }
   printf("\n");
   printf("calculator turnon??\n");
   scanf("%d",&switchcal);
   
   switchcal=(switchcal!=1)?0:1;
   printf("\n");

   }  
}


