#include <stdio.h>

int main(void){
    int l,c,l_d,c_d;
    scanf("%d %d %d %d",&l,&c,&l_d,&c_d);
    
    if (c%2==0)
    {
        if (c_d%2 !=0)
        {
            printf("Esquerda\n");
        
        }
        else
        {
            printf("Direita\n");
        }
        
    }
    else
    {
        if (l_d%2 ==0 && c_d%2 == 0)
        {
            printf("Direita\n");
        }
        else if (l_d%2!=0 && c_d%2!=0)
        {
            printf("Direita\n");
        }
        else{printf("Esquerda\n");}
        
        
    }
    
}