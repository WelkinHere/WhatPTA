#include <stdio.h>
int main()
{
    int cache, Input1, Input2;

    scanf("%d%d", &Input1, &Input2);

    cache = Input1 + Input2;
    printf("%d + %d = %d\n", Input1, Input2, cache);
    cache = Input1 - Input2;
    printf("%d - %d = %d\n", Input1, Input2, cache);
    cache = Input1 * Input2;
    printf("%d * %d = %d\n", Input1, Input2, cache);
    cache = Input1 / Input2;
    printf("%d / %d = %d\n", Input1, Input2, cache);
    cache = Input1 % Input2;
    printf("%d %% %d = %d\n", Input1, Input2, cache);
}