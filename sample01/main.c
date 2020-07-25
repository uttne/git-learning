#include <stdio.h>
#include <stdlib.h>
#include "sub.h"

int main(void)
{
    char dest[64];    
    GetHelloWorldText(dest, sizeof(dest) / sizeof(char));
    printf("%s\n", dest);
}