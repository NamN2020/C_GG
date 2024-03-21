#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char* strLength(char* str);
void replace_char(char* str, char oldChar, char newChar);

int main()
{
    
    char test1[] = "A man, a plan, a canal: Panama";    
    char test2[] = "         r  a c   e  car";
    
    int num = 10;
    int *pointer = &num;

    //printf("This is num: %d\nThis is size of int pointer: %zu\nThis is the pointer: %p\n", num, sizeof(pointer),pointer);
    //printf("Test1: %s\n", test1);
    strLength(test2);
    printf("strLength Test: %s\n", test2); 
    
    return 0;
}

char* strLength(char* str)
{
    char* result = str;  
    do
    {
        //printf("%s","IN WHILE");
        if(isalpha(*str))
        {   
            *result++ = *str;
            printf("%s\n", "IN");           
        }
        else
            *str = ' ';
        str++;
    } while (*str != '\0');
    str = result;
}

void replace_char(char* str, char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}


// Laptop commit

//2nd Laptop Commit

//Desktop Commit

//Finally Synced Machines