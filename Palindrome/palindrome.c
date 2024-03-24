#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

int strLength(char* str);
bool isPalindrome(char* str);
void replace_char(char* str, char oldChar, char newChar);
bool leetCodeSol(char* str);
int lowerCaseConvert(char c);
bool isAlphaNumeric(char c);

int main()
{   
    char test1[] = "A man, a plan, a canal: Panama";    
    char test2[] = "R   a c   e    car";
    
    int num = 10;
    int *pointer = &num;

    //printf("This is num: %d\nThis is size of int pointer: %zu\nThis is the pointer: %p\n", num, sizeof(pointer),pointer);
    //printf("Test1: %s\n", test1);
    //strLength(test2);
    //isPalindrome(test2);
    printf("strLength Test: %s\n", test2); 

    if(leetCodeSol(test1))
        printf("%s\n", "IS");
    else
        printf("%s\n", "IS NOT");

    return 0;
}


bool isPalindrome(char* str)
{ 
    char* temp = malloc((strlen(str))*(sizeof(char)));
    char* result = str;  
    int alphaLength = strLength(str);
    int i = 0;
    do
    {
        if(isalpha(*str) && i < alphaLength)
        {   
            if (*str > 64 && *str < 91)
                *str = *str + 32;        

            temp[i] = *str;
            i++;
        }
        else
            *str = ' ';
        str++;
        i++;
    } while (*str != '\0');

    printf("Temp: %s\n", temp);
    return(!(strcmp(str, temp)));
}


int strLength(char* str)
{
    char* tmp = str;
    int i = 0;
    do
    {
        i++;
        tmp++;
    } while (*tmp != '\0');
    return i;
}

bool leetCodeSol(char* str) {
    int start = 0;
    int last = strlen(str) - 1;

    printf("String Length: %d\n", last);
    while(start < last)
    {
        if (isAlphaNumeric(str[start]))
        {
            if (isAlphaNumeric(str[last]))
            {
                if (lowerCaseConvert(str[start]) != lowerCaseConvert(str[last]))
                    return false;
                start++;
                last--;
            }
            else
            {
                last--;
            }
        }
        else
        {
            start++;
        }
    }

    return true;
}

int lowerCaseConvert(char c)
{
    return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

bool isAlphaNumeric(char c)
{
    return ((c >= 'A'  && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= 48 && c <= 57));
}

// Laptop commit

//2nd Laptop Commit

//Desktop Commit

//Finally Synced Machines

//Command Line Commit

// WSL terminal

// Desk Top working wow wow