#include <bits/stdc++.h>

using namespace std;
int main(void){

int reg_price,reg_unid;
int pro_price,pro_unid;
int test_reg, test_prog;

scanf("%d %d",&reg_unid,&reg_price);
scanf("%d %d",&pro_unid,&pro_price);

test_reg = reg_price*pro_unid;
test_prog = reg_unid*pro_price;

if(test_prog <  test_reg)
    printf("Promocao\n");
else
    printf("Enganacao\n");

}