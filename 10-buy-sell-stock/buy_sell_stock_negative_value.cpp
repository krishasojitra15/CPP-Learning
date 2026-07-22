#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxprofit(vector<int>&prices){
    int maxprofit =0,bestbuy =prices[0];

    for(int i=1; i<prices.size(); i++){
        if(prices[i] >bestbuy){
            maxprofit =max(maxprofit,prices[i]-bestbuy);

        }
        bestbuy =min(bestbuy,prices[i]);
    }
    return maxprofit;

}
int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout << maxprofit(prices) << endl;

    return 0;
}