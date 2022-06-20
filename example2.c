#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sanitizer/lsan_interface.h>

char *end, *str, *start;

char *checkNumber(int argument)
{
    if (!(argument % 3) & !(argument % 5))
        return "EnterJS";
    if (!(argument % 3))
        return "Enter";
    if (!(argument % 5))
        return "JS";
    return "Cannot be devided by three or five";
}

int enterjsGame()
{
    str = (char *)malloc(15);
    end = (char *)malloc(11);
    sprintf(end, "Game Ended");
    start = (char *)malloc(13);
    sprintf(start, "Game Started");

    printf("%s \n", start);
    for (int i = 0; i < 20; i++)
    {
        sprintf(str, "%s", checkNumber(i));
        printf("%d: %s \n", i, str);
    }
    printf("%s \n", end);
    return 0;
}
