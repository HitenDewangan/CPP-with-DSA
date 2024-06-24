#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//==============================================================

vector<int> two_Sum(vector<int>& nums, int target) {         // T.C. - O(n^2) , S.C. - O(1)
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    
    return {-1,-1};
}
//==============================================================

vector<int> twoSum(vector<int>& nums, int target) {         // T.C. - O(n) , S.C. - O(n)
        unordered_map <int, int> indi;
        int i=0;
        for(int el : nums){
            indi[nums[i]] = i;
            i++;
        }
        
        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(indi.count(complement) && indi[complement] != i){
                return {i, indi[complement]};
            }
        }
        
        return {-1,-1};  
    }

//==============================================================

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 13;
    vector<int> ans = twoSum(nums, target);
    for(int el : ans){
        cout<<el<<" ";
    }
}