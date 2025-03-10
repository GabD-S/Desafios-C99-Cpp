#include <iostream>
#include <vector>
using namespace std;

int min_beautiful_array_size(int s) {
    vector<int> nums; 
    int sum = 0;      
    
    for (int i = 1; sum < s; i += 2) { 
        if (sum + i <= s) {
            nums.push_back(i);
            sum += i;
        } else {
            nums.push_back(s - sum);
            sum = s;
        }
    }
    
    return nums.size(); 
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int s;
        cin >> s; 
        
        cout << min_beautiful_array_size(s) << endl; 
    }
    
    return 0;
}
