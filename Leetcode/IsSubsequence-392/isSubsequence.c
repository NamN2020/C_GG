#include<stdio.h>
#include<stdbool.h>
#include <string.h>

int strLength(char *s);
bool isSubsequence(char *s, char *t);

int main()
{
    char* test1 = "abc";
    char* test2 = "ahbgdc";

    if(isSubsequence(test1, test2))
        printf("%s\n", "TRUE");
    else
        printf("%s\n", "FALSE");

    char* error = "";
    if(*error == '\0')
        printf("%s\n", "true");
    else
        printf("%s\n", "false");
    

    return 0;
}


// Get length of char array 
int strLength(char *s)
{
    int count = 0;
    do
    {
        count++;
        s++;
    } while (*s != '\0');
    return count;
}

bool isSubsequence(char *s, char *t)
{
    // Edge cases
    if(*s == '\0')
        return true;
    else if(*t == '\0')
        return false;

    int match = 0;
    int count = strLength(s);
    do    
    {
        if(*s == *t) // if match then iterate both char pointers and incr match variable
        {
            s++;
            t++;
            match++;
        }
        else // if no match then iterate char pointer t
            t++;
    } while (*t != '\0');

    return (match == count);
}