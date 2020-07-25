#include <stdio.h>
#include "sub.h"

int main(void)
{
    char dest[64];
    GetHelloWorldText(dest,64);
    printf("%s", dest);
}