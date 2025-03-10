#include <bits/stdc++.h>
#define llint long long int

using namespace std;

int str_sum(string ticket){
  int result = 0;
  for(int i = 0; i < ticket.size();i++){
    result = result + (ticket[i] - 48);
  }
  return result;
}

int main(){
  int test_cases;
  char ticket[9];  

  scanf("%d", &test_cases);

  for(int _ = 0; _ < test_cases; _++){
    scanf("%s", ticket);

    char sub1[4], sub2[6];
    strncpy(sub1, ticket, 3);  
    sub1[3] = '\0';  
    strncpy(sub2, ticket + 3, 5);  
    sub2[5] = '\0';  

    int test1 = str_sum(sub1);
    int test2 = str_sum(sub2);

    if(test1 == test2)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}
