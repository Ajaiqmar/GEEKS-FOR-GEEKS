#include <stdio.h>

// SLOVING COUNT OF ONES IN A RECTANGLE USING PREFIX SUM APPROACH

void countOfOnes()
{
    // DIMENSIONS OF ARRAY.
    int r,c;
    scanf("%d %d",&r,&c);
    
    int arr[r][c],pre[r][c];
    
    // PREFIX SUM CALCULATION
  
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
            
            if(i!=0 || j!=0)
            {
                if(i==0)
                {
                    pre[i][j] = arr[i][j]+pre[i][j-1];
                }
                else if(j==0)
                {
                    pre[i][j] = arr[i][j]+pre[i-1][j];
                }
                else
                {
                    pre[i][j] = pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+arr[i][j];
                }
            }
            else
            {
                pre[i][j] = arr[i][j];
            }
            
        }
    }
    
    int q;
    scanf("%d",&q);
    
    // NUMBER OF ONES IN A RECTANGLE = NO. OF ONES IN BOTTOM RIGHT CELL - (ABSOLUTE(NO. OF ONES IN BOTTOM LEFT CELL - NO. OF ONES IN TOP LEFT CELL) +
    // ABSOLUTE(NO. OF ONES IN TOP RIGHT CELL - NO. OF ONES FROM TOP LEFT CELL) + NO.OF ONES IN TOP LEFT CELL)
  
    for(int i=0;i<q;i++)
    {
        int r1,c1,r2,c2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        
        int tl=0,tr=0,bl=0,br=pre[r2-1][c2-1];
        
        if((r1-2)>=0 && (c1-2)>=0)
        {
            tl = pre[r1-2][c1-2];
            tr = pre[r1-2][c2-1];
            bl = pre[r2-1][c1-2];
        }
        
        if((r1-2)>=0)
        {
            tr = pre[r1-2][c2-1];
        }
        
        if((c1-2)>=0)
        {
            bl = pre[r2-1][c1-2];
        }
        
        int ans = br - (abs(tl-bl)+abs(tl-tr)+tl);
        
        printf("%d\n",ans);
    }
}

// MAIN METHOD

int main() {
	//code
	int T;
	scanf("%d",&T);
	
	while(T!=0)
	{
	    countOfOnes();
	    T-=1;
	}
	return 0;
}
