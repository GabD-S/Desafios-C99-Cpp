#include <bits/stdc++.h>
using namespace std;


int main(void){

    int t;
    char parenthesis;
    queue<char> parentheses_queue;
    int decision = 1;
    
    scanf("%d", &t);

    getchar();
    for(int i = 0; i < t; i++){

        scanf("%c",&parenthesis);
        parentheses_queue.push(parenthesis);
    }

    int open_count = 0, close_count = 0;
    while(!parentheses_queue.empty()){

        parenthesis = parentheses_queue.front();
        parentheses_queue.pop();

        if(parenthesis == '('){
            open_count++;
        } else{
            if(open_count < close_count){
                decision = 0;
            }
            close_count++;
        }

    }
    
    if(open_count != close_count)
        decision = 0;
    
    decision ? printf("Yes\n") : printf("No\n");

}