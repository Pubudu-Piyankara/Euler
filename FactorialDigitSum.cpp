#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main()
{
    int num;
    cin>> num;
   
    vector<int> factorial;


    factorial.push_back(1);
    for (int i = 2; i <= num; i++) {
        int carry = 0;
        for (int j = 0; j < factorial.size(); j++) {
            int product = factorial[j] * i + carry;
            factorial[j] = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            factorial.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(factorial.begin(), factorial.end());
    int remender = 0;
    int sum = 0;

    for(auto c : factorial){
        sum +=c;
    }
    cout << sum;
    
    // while (factorial>0)
    // {
    //     remender = factorial%10;
    //     sum += remender;
    //     factorial = factorial/10;
    // }
    
    

    // for (auto i : factorial) {
       
    //     cout << i;
        
    // }

    
    return 0;
}
