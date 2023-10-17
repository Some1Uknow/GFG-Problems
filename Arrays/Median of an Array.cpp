//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
		int find_median(vector<int> v)
		{
		    int n = v.size();
		    sort(v.begin(), v.end());
		    if (n % 2 == 0) {
            int i = n/2;
            int x = i -1;
            return (v[i]+v[x])/2;
            } 
            else {
                int j = (n + 1) / 2;
                return v[j - 1]; }

}};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
