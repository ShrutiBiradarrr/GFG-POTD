//{ Driver Code Starts
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