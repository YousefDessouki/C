#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

char* global_function(char input[]);
int size_of_a_string(char str[]);
int random_number_generator(int iw);
int is_letter_existing(char input[],char test);
int location_of_a_letter(char input[],char test);
char* delete_letter(char input[],char test);

int main() 
{
    printf("welcome to the game, enter  the word please\n");
    char input[100];
    fgets(input,sizeof(input),stdin);

    char* str = global_function(input);
    printf("%s\n", str);
    
    ///define the flag and the numberofattempts
    int flag=1,counter=0,wrong_attempts=3;
    char trial;


   while(flag)
   {
    ////now u have the original word and the moddifes word
    if(counter>=wrong_attempts)
    {
        flag=0;
    }
    else
    {
        printf("enter the letter\n");
        scanf("%c",&trial);
        if(is_letter_existing(str,trial)>0)
        {
            str=delete_letter(str,trial);
            printf("You have entered a matching letter\n");
            

        }
        else
        {
            printf("you have enetered a wrong letter\n");
            counter++;
        }

        flag=1;

    }

   }
}

char* global_function(char input[]) {
    static char str[100];
    int size_input=size_of_a_string(input);
    int x=random_number_generator(size_input-1);
    int j=0;

    for(int i=0;i<size_input+1;i++)
    {
        if(i!=x)
        {
            str[j]=input[i];
            j++;
        }

    }
    str[j] = '\0';

    
    return str;
}

int size_of_a_string(char str[])
{
    int size=0;
    while(str[size]!='\0')
    {size++;}
    return size-1;
}

int random_number_generator(int iw)
{
    int answer,upperlimit,lowerlimit;
    lowerlimit=0;
    upperlimit=iw;
    answer=(rand()%(upperlimit-lowerlimit+1))+lowerlimit;
    return answer;
}

int is_letter_existing(char input[],char test)
{
    int size=size_of_a_string(input);
    int counter=0;
    int location=0;
    for(int i=0;i<size-1;i++)
    {
        if(input[i]==test)
        {
            counter=1;
            location=i;
            break;
        }
    }   
    return counter;

}

int location_of_a_letter(char input[],char test)
{
     int size=size_of_a_string(input);
    int counter=0;
    int location=0;
    for(int i=0;i<size-1;i++)
    {
        if(input[i]==test)
        {
            counter=1;
            location=i;
            break;
        }
    }   
    return location;

}

char* delete_letter(char input[],char test)
{
    static char str[100];
    //only preform this function if the letter is existing
    if(is_letter_existing(input,test)>0)
    {
        int deletion_location=location_of_a_letter(input,test);
        int size_of_string= size_of_a_string(test);
        //now u can delete
        int j=0;

        for(int i=0;i<size_of_string+1;i++)
        {
        if(i!=deletion_location)
        {
            str[j]=input[i];
            j++;
        }

        }
         str[j] = '\0';

    
    return str;

    }
    
    

}