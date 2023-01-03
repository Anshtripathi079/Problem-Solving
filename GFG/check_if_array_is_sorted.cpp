// User function template for C++

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        if(n==0) return true;
        for(int i=1;i<n;i++){
            if(arr[i] < arr[i-1]) return false;
        }
        return true;
    }
};