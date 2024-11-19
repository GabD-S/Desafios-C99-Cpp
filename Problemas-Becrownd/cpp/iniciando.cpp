#include <bits/stdc++.h>
#include <thread>

int main(void)
{

   char hellow[7] = {72,101,108,108,111,119};
   char primeira_palavra[7]={32};

   for (int i = 0; i < 6; i++)
   {
    for (char j = 65; j <= 122; j++)
    {
        if (hellow[i] == j)
        {
            primeira_palavra[i]=j;
            printf("%s\n",primeira_palavra);
            std::this_thread::sleep_for(std::chrono::milliseconds(50));

        }
        else if(primeira_palavra[5] == 'w')
            break; 
        else
        {  
            printf("%s%c\n",primeira_palavra,j);
            std::this_thread::sleep_for(std::chrono::milliseconds(50));

        }           
    }
    
   }    

    
}