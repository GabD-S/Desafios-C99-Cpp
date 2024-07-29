#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Rx, Ry;
        scanf("%d %d %d %d %d %d %d %d %d %d", &Ax, &Ay, &Bx, &By, &Cx, &Cy, &Dx, &Dy, &Rx, &Ry);

        int dentro = (Ax <= Rx && Dx <= Rx &&
                      Rx <= Bx && Rx <= Cx &&
                      Ay <= Ry && By <= Ry &&
                      Ry <= Cy && Ry <= Dy);

        printf("%d\n", dentro);
    }

    return 0;
}
