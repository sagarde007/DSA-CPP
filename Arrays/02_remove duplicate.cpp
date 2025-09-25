#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        return n;

        int first =0 , second = 1;
        while(second<n){
            if(nums[first] == nums[second])
            second++;

            else{
                first++;
                nums[first] = nums[second];
                second++;
            }
        }
        return first+1;
    } 
int main(){
    // leedcode problem --> 26
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array&difficulty=EASY
    return 0;
}