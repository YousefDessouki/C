#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
void game_driver(int input);
int main()
{
    printf("Welcome to the game\n");
    printf("1 for rock, 2 for scissor and 3 for paper,4for exitting\n");
    int input_command;
    int flag=1;
    while(flag)
    {
        scanf("%d",&input_command);
        game_driver(input_command);
        if(input_command==4)flag=0;
        else 
        flag=1;

    }
    

}

void game_driver(int input)
{
    int lower_boundary,upper_boundary,num;
    lower_boundary=1;
    upper_boundary=3;
    srand(time(0));
    num=(rand()%(upper_boundary-lower_boundary+1))+lower_boundary;
    int checker_flag=0;
    if(input==1)
    {

        //the user enter the rock option
        if(num==2)
        checker_flag=1;
        else
        checker_flag=0;

    }
    else if(input==2)
    {
        if(num==3)
        checker_flag=1;
        else
        checker_flag=0;

    }
    else if(input==3)
    {
        if(num==1)
        checker_flag=1;
        else
        checker_flag=0;

    }

    if(checker_flag)
    {
        printf("You won\n");
    }
    else
    {
        printf("You lost\n");
    }

}