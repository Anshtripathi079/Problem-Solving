
class Solution

{

    public:

    //Function to find the maximum occurring character in a string.

    char getMaxOccuringChar(string str)

    {

        // Your code here

        map<char , int> umap;

        

        for(int i = 0 ; i < str.size() ; i++){

            umap[str[i]]++;

        }

        

        int maxi = INT_MIN;

        char ans;

        

        for(auto i = umap.begin() ; i != umap.end() ; i++){

            int val = i->second;

            if(val > maxi){

                ans = i->first;

            }

            maxi = max(maxi, val);

        }

        

        return ans;

    }

 

};