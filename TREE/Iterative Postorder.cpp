#include <bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> postOrder(Node* root) {
        // code here
        stack<Node*>s;
        s.push(root);
        vector<int>ans;
        while(!s.empty()){
            Node* temp = s.top();
            s.pop();
            ans.push_back(temp->data);
            if(temp->left)
            s.push(temp->left);
            if(temp->right)
            s.push(temp->right);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){
    // <------- Gfg problem ------>
    // https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1?page=3&difficulty%5B%5D=1&category%5B%5D=Tree&sortBy=submissions

    return 0;
}