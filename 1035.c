#include <stdio.h>

double cal(int a, int b, int c, int d){

    if (b > c && (d>a) && ((c+d)>(a+b)&&(c>0) && (d>0) && (a%2==0) ))
    {
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
    

}

int main(void){
    int a,b,c,d;
    double chama;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    chama = cal(a,b,c,d);

}
