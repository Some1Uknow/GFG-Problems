//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    string num = to_string(n);
		    string reversed = num;
		    reverse(reversed.begin(), reversed.end());
		    if (num == reversed){
		        return "Yes";
		    }
		    return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
