#include <stdio.h>

int a=10;


int main()
{
    int volatile *ptr =  (int*)0x403010;
    //ptr = 0x008;
    *ptr = 20;
    printf(" %d", *(int*)(0x403010));

    return 0;
}
