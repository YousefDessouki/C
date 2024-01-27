#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int frequency_of_a_letter(char str[],char letter);
int size_of_a_string(char str[]);
int is_alphabet(char c);
void remove_non_alphabets(char* str);

int main()
{
    char str[100];
    printf("enter the sentence\n");
    fgets(str, sizeof(str), stdin);
    int size=size_of_a_string(str);

    remove_non_alphabets(str);
    printf("%s\n",str);


    return 0;




}

void remove_non_alphabets(char* str) {
    int i = 0, j = 0;
    while (str[i]) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
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


int is_alphabet(char c) {
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
    else return 0;
}


