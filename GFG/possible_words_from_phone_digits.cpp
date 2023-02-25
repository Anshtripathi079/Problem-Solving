//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    void solve(int a[], int N,int index,vector<string>& ans,string output,string mapping[]){
        // base case 
        if(index >= N){
            ans.push_back(output);
            return;
        }
        string val = mapping[a[index]];
        
        for(int i=0;i<val.size();i++){
            output.push_back(val[i]);
            solve(a,N,index+1,ans,output,mapping);
            output.pop_back();
        }
    }
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        string output = "";
        if(N==0) return ans;
        int index = 0;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(a,N,index,ans,output,mapping);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends