#include <iostream>
using namespace std;

class Solution{
    public:
        int search(int* arr,int n,int x)
        {
            int count = 0;
            
            for(int i=0;i<n;i++)
            {
                if(arr[i] > x)
                {
                    count++;
                }
            }
            
            return count;
        }
};

int main() {
	int T;
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
	    Solution s;
	    
	    int n,x;
	    cin >> n >> x;
	    
	    int* arr = new int[n];
	    for(int j=0;j<n;j++)
	    {
	        cin >> arr[j];
	    }
	    
	    cout << s.search(arr,n,x) << endl;
	}
	
	return 0;
}
