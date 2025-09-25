#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                ans=max(ans,count);
            }
            else{
                count =0;
            }
        }
        return ans;
    }
int main(){
    /// leedcode problem --> 485
    // https://leetcode.com/problems/max-consecutive-ones/description/
    return 0;
}