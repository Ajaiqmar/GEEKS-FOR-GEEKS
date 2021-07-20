include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
	    int n,k;
	    cin >> n >> k;
	    
	    int countOfEven = 0;
	    int* arr = new int[n];
	    int* evenIndex = new int[n];
	    
	    int slidingIndex = 0,index = 0,eiIndex = 0,maxLength = 0;
	    
	    for(int j=0;j<n;j++)
	    {
	        cin >> arr[j];
	        
	        if(arr[j]%2 == 0)
	        {
	            countOfEven++;
	            evenIndex[index++] = j+1;
	        }
	        
	        if(countOfEven > k)
	        {
	            slidingIndex = evenIndex[eiIndex++];
	            countOfEven--;
	        }
	        
	        int length = ((j-slidingIndex)+1);
	        if(length > maxLength)
	        {
	            maxLength = length;
	        }
	    }
	    
	    cout << maxLength << endl;
	}
	
	return 0;
}
