#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int>nums,int target){
   vector<int>ans;
   int n=nums.size();
   
   int i=0, j=n-1;
   while(i<j){
    int pairsum =nums[i] +nums[j];
    if(pairsum >target){
        j--;
    }else if(pairsum <target){
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
   }

   return ans;
}
int main(){
    vector<int> nums={2,7,11,13};
    int target =20;
    
    vector<int> ans =pairsum(nums,target);
   
    if(ans.size() == 2){
    cout << ans[0] << " " << ans[1] << endl;
}
else{
    cout << "Pair not found";
}
   
    return 0;
}