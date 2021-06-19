struct pair{
  long long int min;
  long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) {
    struct pair ans;
    ans.min = arr[0];
    ans.max = arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i] > ans.max)
        {
            ans.max = arr[i];
        }
        
        if(arr[i] < ans.min)
        {
            ans.min = arr[i];
        }
    }
    
    return ans;
}
