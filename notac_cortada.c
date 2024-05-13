#include <stdio.h>

int main()
{
    int c1, c2, c3, c4, c5;
    scanf("%d %d", &c1, &c2);
    c3 = (c1 +c2) *35;
    if (c3 > 35 *160)
    {
        printf("1\n");
    }
    else if (c3 < 35 *160)
    {
        printf("2\n");
    }
    else{printf("0\n");}
    
    
    return 0;
}
