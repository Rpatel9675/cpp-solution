#include"bits/stdc++.h"
using namespace std;
/*
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Constraints:
1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4*/
int buystock(int prices[],int n){
    int buy=prices[0], max_profit=0;
    for(int i=0; i<n;i++){
        if(buy>prices[i]){
            buy = prices[i];
        }
        max_profit= max((prices[i]-buy), max_profit);
    }
    return max_profit;
}

int main(){
    int prices[] = {7,1,5,3,6,4,19 };
    int n= sizeof(prices)/sizeof(prices[0]);
    int max_profit=buystock(prices, n);
    cout<<max_profit;
}
