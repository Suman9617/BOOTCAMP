#include <stdio.h>
int main()
{
    int a, b, c;
    int x, y, z;
    printf("enter side\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("enter angle\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x > 0 && y > 0 && z > 0 && a > 0 && a > 0 && c > 0)
    {
        if (x + y + z == 180 && a + b > c && b + c > a && c + a > b)
        {
            printf("valid");
        }
        else
        {
            printf("not valid");
        }
    }
}
