//3. ���дһ������int fun(char* ss, char* s)���ú����Ĺ����ǣ����ss�ַ�����ָ���Ӵ�s�ĸ����������ش�ֵ��

//���磬������ss = "1231231"��s = "12"�������2��
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