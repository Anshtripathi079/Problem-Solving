

// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {

    int i,mx=arr[0],mn=arr[0],a,b;

    for(i=0;i<n;i++){

        if(arr[i]>mx)

        {

            mx=arr[i];

        }

            if(arr[i]<mn){

                mn = arr[i];

            }

        

    }

    struct pair pair = {mn,mx};

    return pair;

    

}
