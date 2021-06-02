//3. 请编写一个函数int fun(char* ss, char* s)，该函数的功能是：求出ss字符串中指定子串s的个数，并返回此值。

//例如，若输入ss = "1231231"，s = "12"，则输出2。
#include <string.h>
#include <stdio.h>
#define M 81
int fun(char* ss, char* s)
{
    int i, j=0;
    int n=0,a=0;
    for (i = 0; i < strlen(ss); i++)
    {
        if (*(ss + i) == *(s + j))
        {
            n++;
            j++;
        }
        else
        {
            n = 0;
            j = 0;
        }
        if (n == strlen(s))
        {
            a++, j = 0;
        }
    }
    return a;
}

int main()

{

    char a[M], s[M];

    printf("\nPlease enter a string:");

    gets(a);

    printf("\nPlease enter a substring:");

    gets(s);

    printf("\nThe counts is: %d\n", fun(a, s));

}