
#include <stdio.h>
#include "string_funcs.h"
char *StrCpy(char *dest, const char *src)
{
    char *head_dest = dest;

    while(*src != '\0')
    {
        *dest = *src;
        ++dest;        
        ++src;
    }

    *dest = *src;

    return head_dest;   

}
int main()
{
    char s[100] = "hello world my name is amitay";
    char d[100] = "hey!";

    printf("%s\n", StrCpy(d,s));


    return 0;
}
