#include <stdio.h>
#include <math.h>


double cal(double a,double b,double c){
    double res,a1,b1,c1;
    a1= a;
    if(b>a && b>c) {
        a=b;
        b=a1;   
    }
    else if (c>a)
    {
        a=c;
        c=a1;
    }

    if (a >=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if (a*a == b*b+c*c)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (a * a > b * b + c * c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (a * a < b * b + c * c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a==b && b==c && a==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (a==b && b!=c || a==c && c!=b || b==c && c!=a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}

int main(void){
    double a,b,c,res;
    scanf("%lf %lf %lf",&a,&b,&c);
    res = cal(a,b,c);
}
