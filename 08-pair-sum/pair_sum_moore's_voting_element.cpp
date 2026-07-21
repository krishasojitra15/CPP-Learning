#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityelement(vector<int> &nums){
    int n=nums.size();
    int freq =0, ans=0;
    for(int i=0; i<n ;i++){
        if(freq==0){
            ans =nums[i];
        }
        else if(ans== nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};
   
    cout << majorityelement(nums);

    return 0;
}