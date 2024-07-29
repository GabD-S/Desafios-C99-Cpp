#include <stdio.h>

int main(void){


    int idade1,idade2;

    scanf("%d\n%d",&idade1,&idade2);

    if ((idade1 >= 18 || idade2 >= 18) && (idade1 >= 6 && idade2 >= 6) || idade1 >= 14 && idade2 >= 14 && (idade1 >= 6 && idade2 >= 6))
    {
        printf("YES\n");
    }
    else{printf("NO\n");}


}