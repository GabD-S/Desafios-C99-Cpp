#include <stdio.h>

int sep(int ent){
    int hr, min, seg, resto;
    hr = ent / 3600;
    resto = ent - (hr * 3600);
    min = resto / 60;
    resto = resto - (min * 60);
    seg = resto;
    printf("%d:%d:%d\n", hr, min, seg);
    return 0;
}


int main(void){
    int ent,hr,min,seg,resto;
    scanf("%d",&ent);
    resto = sep(ent);
    
    return 0;
}