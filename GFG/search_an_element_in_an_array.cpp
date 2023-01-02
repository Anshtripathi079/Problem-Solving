//User function Template for C

int search(int arr[], int N, int X)
{
        int i,pos=0;
        for(i=0;i<N;i++){
            if(X == arr[i]){
                pos++;
                break;
            }
        }
 if(pos==1){
     return i;
 }       
 else{
     i=-1;
 }
        return i;
}
       