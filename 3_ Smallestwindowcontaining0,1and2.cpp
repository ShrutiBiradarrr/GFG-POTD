//{ Driver Code Starts
/*
Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.

Example 1:

Input:
S = 10212
Output:
3
Explanation:
The substring 102 is the smallest substring
that contains the characters 0, 1 and 2.
Example 2:

Input: 
S = 12121
Output:
-1
Explanation: 
As the character 0 is not present in the
string S, therefor no substring containing
all the three characters 0, 1 and 2
exists. Hence, the answer is -1 in this case.

*/
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
       int start=0;
        int end=0;
        int result=INT_MAX;
       int zero=0,one=0,two=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            zero++;
            else if(s[i]=='1')
            one++;
            else
            two++;
            
            end=i;
            while(zero && one && two && start<end)
            {
                result=min(result,end-start+1);
                
                if(s[start]=='0')
                zero--;
                else if(s[start]=='1')
                one--;
                else
                two--;
                
                start++ ;
            }
        }
        
        if(result==INT_MAX)
        return -1 ;
        return result ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends