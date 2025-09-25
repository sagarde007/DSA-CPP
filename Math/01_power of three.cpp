#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPowerOfThree(int n) {
        if(n==0){
            return 0;
        }
        if(n==3||n==1){
            return 1;
        }
        else if(n%3==0){
            return isPowerOfThree(n/3);
        }
        return 0;


    }
int main(){
    // leedcode problem --> 326
    //https://leetcode.com/problems/power-of-three/description/?envType=problem-list-v2&envId=math&difficulty=EASY
    return 0;
}