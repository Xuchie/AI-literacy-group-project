#include <stdio.h>
#include <ctype.h>

void printInitial(const char *str);
void printInitial(const char *str)
{
    printf("%c.", toupper(*str));
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {

            printf("%c.", toupper(str[i + 1]));
        }
    }
}

int main()
{
    char str[300];

    fgets(str, 200, stdin);
    printInitial(str);
}