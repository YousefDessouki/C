#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int frequency_of_a_letter(char str[],char letter);
int size_of_a_string(char str[]);

int main()
{
    char str[100];
    printf("enter the sentence\n");
    fgets(str, sizeof(str), stdin);
    printf("enter the letter\n");
    char letter;
    scanf("%c",&letter);
    
    int x =frequency_of_a_letter(str,letter);
    printf("the frequency of the letter is : %d\n",x);


    return 0;




}

int size_of_a_string(char str[])
{
    int size=0;
    while(str[size]!='\0')
    {size++;}
    return size-1;
}



int frequency_of_a_letter(char str[],char letter)
{
    int count=0;
    int size=size_of_a_string(str);
    for(int i=0;i<size;i++)
    {
        if(str[i]==letter)count++;

    }
    return count;
}
