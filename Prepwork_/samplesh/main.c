#include <stdio.h>
#include <stdlib.h>

void func_proto(void){
    printf("normal function which to be passed as call back.\n");

}

void callback_funct(void(*ptr)(void)){
    printf("This is callback funct.\n");
    (*ptr)();
}

int main()
{
    //void (*funct_ptr)(void)= &func_proto;
    callback_funct(&func_proto);
    char *string = "stringesh";
    //printf("%s\n", string);
    //printf("%s\n", (char*)0x404000);
    //printf("%x\n", &string);
    //printf("%x \n", *(int*)0x61fe18);
}
