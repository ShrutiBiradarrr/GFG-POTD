/*
Given an array arr[] of N elements and a number K., split the given array into K subarrays such that the maximum subarray sum achievable out of K subarrays formed is minimum possible. Find that possible subarray sum.

Example 1:

Input:
N = 4, K = 3
arr[] = {1, 2, 3, 4}
Output: 4
Explanation:
Optimal Split is {1, 2}, {3}, {4}.
Maximum sum of all subarrays is 4,
which is minimum possible for 3 splits. 
Example 2:

Input:
N = 3, K = 2
A[] = {1, 1, 2}
Output:
2
Explanation:
Splitting the array as {1,1} and {2} is optimal.
This results in a maximum sum subarray of 2.
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
       bool isPossible(long long int sum , int arr[] ,int n, int k)
    {
        long long int temp=0;
        
        int i=0;
        int tempk=0;
        while(i<n && temp<=sum)
        {
            if(arr[i]>sum)
            {
                return false;
            }
            temp+=arr[i];
            if(temp>sum)
            {
                tempk++;
                temp=arr[i];
            }
            i++;
        }
        tempk++;
        
        if (tempk<=k)
        {
            return true;
        }
        return false;
    }
    int splitArray(int arr[] ,int n, int k) {
        // code here
        
        long long int sum=0;
        
        for(int i=0 ; i<n ; i++)
        {
            sum+=arr[i];
        }
        
        long long int low=0;
        long long int high=sum;
        long long int ans=INT_MAX;
        
        while(low <= high)
        {
            long long int maxSum= low+(high-low)/2;
            if(isPossible(maxSum , arr, n, k))
            {
                ans=maxSum;
                high=maxSum-1;
            }
            else{
                low=maxSum+1;
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
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends