#include <stdio.h>
int main(void)
{
    char c;
    int tabs = 0;
    int spaces = 0;
    int enter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            enters++;
        }
        else if (c == ' ')
        {
            spaces++;
        }
        else if (c == '\t')
        {
            tabs++;
        }
    }
    printf("Number of new lines: %d\n",enter);
    printf("Number of tabs: %d\n",tabs);
    printf("Number of spaces: %d",spaces);

    return 0;
}