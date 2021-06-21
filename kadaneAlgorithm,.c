#include <stdio.h>
#include <limits.h>

void minSum()
{
    int n;
    scanf("%d",&n);
    
    int arr[n],min = INT_MAX,v = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        int min = INT_MAX,v = 0;
        for(int j=i;j<n;j++)
        {
            v += arr[j];
            
            if(v<min)
            {
                min = v;
            }
            
            if(v>0)
            {
                v = 0;
            }
        }
        
        printf("%d ",min);
    }
    printf("\n");
}

int main() {
	//code
	int T;
	scanf("%d",&T);
	
	for(int i=0;i<T;i++)
	{
	    minSum();
	}
	
	return 0;
}
