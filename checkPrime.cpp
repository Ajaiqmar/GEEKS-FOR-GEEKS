#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin >> n >> k;
        
        while(k!=0)
        {
            if((n^(n%10)) == n)
            {
                break;
            }
            
            n = (n^(n%10));
            k--;
        }
        
        cout << n << endl;
    }
    
	return 0;
}
