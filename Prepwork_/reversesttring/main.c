#include <stdio.h>
#include <string.h>

char* reverse(char* dest, const char *source, int size){

    dest = dest+size;
    *dest = '\0';

    while (*source != '\0'){
        --dest;
        *dest = *source;
        source++;
    }
    return dest;
}

int main()
{
    char *val = "value";
    char reverseval[20];
    printf("%p %p",reverse(reverseval, val, strlen(val)),reverseval);
    printf("%s %s, %s", reverse(reverseval, val, strlen(val)), reverseval, val);
}
