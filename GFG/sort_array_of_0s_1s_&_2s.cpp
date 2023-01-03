class Solution
{
    void swap(int a[],int x,int y){
        int temp;
        temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    public:
    void sort012(int a[], int n)
    {
    //   sort(a,a+n);
    int low=0;
    int mid=0;
    int end = n-1;
    while(mid<=end){
        
        if(a[mid]==1){
            mid++;
        }
        else if(a[mid]==0){
            swap(a,low,mid);
            mid++;
            low++;
        }
        else{
            swap(a,mid,end);
            // mid++;
            end--;
        }
    }
       
    }
    
};