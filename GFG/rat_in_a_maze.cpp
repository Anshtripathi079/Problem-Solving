//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    bool isvalid(int newx,int newy,int n,vector<vector<int>> visited,vector<vector<int>> m){
        if((newx >=0 && newx < n) && (newy>=0 && newy<n) && (visited[newx][newy]==0) && (m[newx][newy]==1)){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n,int x,int y,string path,vector<vector<int>> visited, vector<string>& ans){
        // base case
        if(x == n-1 && y == n-1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // down -> x+1,y
        int newx = x+1;
        int newy = y;
        if(isvalid(newx,newy,n,visited,m)){
            path.push_back('D');
            solve(m,n,newx,newy,path,visited,ans);
            path.pop_back();
        }
        
        // up -> x-1,y
        newx = x-1;
        newy = y;
        if(isvalid(newx,newy,n,visited,m)){
            path.push_back('U');
            solve(m,n,newx,newy,path,visited,ans);
             path.pop_back();
        }
        
        // right -> x,y+1
        newx = x;
        newy = y+1;
        if(isvalid(newx,newy,n,visited,m)){
            path.push_back('R');
            solve(m,n,newx,newy,path,visited,ans);
             path.pop_back();
        }
        
        // left -> x,y-1
        newx = x;
        newy = y-1;
        if(isvalid(newx,newy,n,visited,m)){
            path.push_back('L');
            solve(m,n,newx,newy,path,visited,ans);
             path.pop_back();
        }
        
        
        
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0]==0) return ans;
        int x = 0,y = 0;
        
        vector<vector<int>> visited = m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(m,n,x,y,path,visited,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends