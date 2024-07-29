#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,delta,bsk1,bsk2,div1,div2,div3;

    scanf("%lf %lf %lf",&a,&b,&c);
    delta = pow(b,2) - (4*a*c);
    div1 = (-b + sqrt(delta));
    div2 = (-b - sqrt(delta));
    if (delta < 0 )
    {
        printf("Impossivel calcular\n");
    }
    
    else{
        div3=(2*a);
        if (div3 <= 0)
        {
            printf("Impossivel calcular\n");
        }
        else{

            bsk1 = div1 / (2 * a);
            bsk2 = div2 / (2 * a);

            printf("R1 = %.5lf\n", bsk1);
            printf("R1 = %.5lf\n", bsk2);
        }
        
    }
    
    return 0;
}
