//{ Driver Code Starts
/*
A Techfest is underway, and each participant is given a ticket with a unique number. Organizers decide to award prize points to everyone who has a ticket ID between a and b (inclusive). The points given to a participant with ticket number x will be the sum of powers of the prime factors of x.

For instance, if points are to be awarded to a participant with ticket number 12, the amount of points given out will be equal to the sum of powers in the prime factorization of 12 (22 × 31), which will be 2 + 1 = 3.

Given a and b, determine the sum of all the points that will be awarded to the participants with ticket numbers between a and b (inclusive).

Example 1:

Input: 
a = 9
b = 12
Output: 
8
Explanation: 
For 9, prime factorization is:32 
So, sum of the powers of primes is: 2
For 10, prime factorization is : 21x51 
So, sum of the powers of primes is: 2
For 11, prime factorization is : 111 
So, sum of the powers of primes is: 1
For 12, prime factorization is : 22x 31 
So, sum of powers of primes is: 3
Therefore the total sum is 2+2+1+3=8.
*/
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int sumOfPowers(int a, int b){
	    // Code here
	       int ans=0;
        for(int i=a;i<=b;i++){
            int x=i;
            for(int j=2;j*j<=x;j++){
                while(x%j==0){
                    ans++;
                    x=x/j;
                }
            }
            if(x!=1){
                    ans++;
                }
        }
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends