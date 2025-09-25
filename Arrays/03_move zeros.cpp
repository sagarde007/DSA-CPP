#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
int main(){
    // leedcode problem--> 283
    // https://leetcode.com/problems/move-zeroes/description/?envType=problem-list-v2&envId=array&difficulty=EASY
    return 0;
}