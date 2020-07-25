#include "sub.h"

void GetHelloWorldText(char* dest, int length)
{
    const char text[] = "Hello, World!";

    const int count = sizeof(text) / sizeof(char);
    for(int i = 0; i < count && i < length; ++i)
    {
        dest[i] = text[i];
    }
}