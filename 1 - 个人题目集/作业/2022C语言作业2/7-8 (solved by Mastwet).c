#include <stdio.h>
int main()
{
    char c;
    int space=0,digit=0,other=0;

    while ((c=getchar())!='\n')
    {
        if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
        {
            other++;
        }
        else if (c == ' ')
        {
            space++;
        }
        else if (c >= '0'&&c <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("blank = %d, digit = %d, other = %d",space,digit,other);
    return 0;
}