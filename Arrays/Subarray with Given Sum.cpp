//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    std::vector<int> subarraySum(std::vector<int> arr, int N, long long S) {
        int i = 0, j = 0;
        long long currentSum = 0;
        
        while (j < N) {
            currentSum += arr[j];
            
            while (i <= j && currentSum > S) {
                currentSum -= arr[i];
                i++;
            }
            
            if (currentSum == S) {
                if (i > j){
                    return vector<int>{-1};
                }
                else 
           { return vector<int>{i + 1, j + 1};}
            }
            
            j++;
        }
        return vector<int>{-1};
    }
};


//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
