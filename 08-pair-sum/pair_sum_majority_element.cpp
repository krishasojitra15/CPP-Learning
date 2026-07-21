#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityelement(vector<int> &nums){
   
   int n=nums.size();
//    sort
   sort(nums.begin(),nums.end());
//    freq
   int freq=1, ans =nums[0];
   for(int i=1; i<n; i++){
    if(nums[i]==nums[i-1]){
        freq++;
    }else{
        freq=1;
        ans=nums[i];
    }
    if(freq>n/2){
        return ans;
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