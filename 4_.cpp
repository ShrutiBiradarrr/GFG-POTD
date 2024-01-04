/*
Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
Find that element which occurs once.

Example 1:

Input:
N = 4
arr[] = {1, 10, 1, 1}
Output:
10
Explanation:
10 occurs once in the array while the other
element 1 occurs thrice.   */

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int singleElement(int arr[] ,int n) {
        unordered_map<int,int>mp;
        for(int i=0;i<=n-1;i++){
            mp[arr[i]]++;
        }
        
        int ans=0;
        for(auto x:mp){
            if(x.second==1){
                ans = x.first;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends