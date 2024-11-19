#include <bits/stdc++.h>

int main(void)
{

    int repeat,umbrellas_work=0,umbrellas_home=0;
    char sun,rain;

    scanf("%d",&repeat);

    for (int i = 0; i < repeat ; i++)
    {
        scanf("%c",sun,rain);
        if (sun == 's' && umbrellas_work !=0)
            umbrellas_work--;
        else if(sun,rain == 'c' && umbrellas_work != 0 )
            umbrellas_work++;
        if (sun == 's' && umbrellas_home !=0)
            umbrellas_home--;
        else if(rain == 'c' && umbrellas_home != 0 )
            umbrellas_home++;
        
    }

    printf("%d %d",umbrellas_home, umbrellas_work);
    

}