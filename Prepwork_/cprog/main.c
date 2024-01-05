#include <stdio.h>
#include <stdlib.h>

void funcs(int a[], int b){
    printf("%d %d %d %d", a[0], a[1], a[2], b);
}

int main()
{
    char c = 's';
    char *s = c;
    //int a[]={34,234,24,24,2341,1414,245,452};
    printf("%c", s);
    //funcs(a, 9);
    /*
    int b[] = {9,8,7};
    int *ptr = b;


    printf("%d %d\n",&b, *ptr);
    ptr = ptr+2;
    printf("%d %d",&b, *ptr);

*/
}

