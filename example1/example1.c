#include <emscripten.h>
#include <stdio.h>
#include <string.h>

void countToTwenty()
{
    for (int i = 0; i < 20; i += 2)
        printf("%d \n", i);
}