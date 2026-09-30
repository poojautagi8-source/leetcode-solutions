#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "({[]})";
    char stack[100];

    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
            {
                printf("false\n");
                return 0;
            }

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
            {
                printf("false\n");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}