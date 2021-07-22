class Solution
{
    public int[] leastPrimeFactor(int n)
    {
        int[] ans = new int[n+1];
        ans[1] = 1;
        
        Boolean[] map = new Boolean[n+1];
        
        for(int i=2;i<=n;i++)
        {
            if(map[i] == null)
            {
                map[i] = true;
                ans[i] = i;
                
                for(int j=i;j<=n;j+=i)
                {
                    if(map[j] == null)
                    {
                        ans[j] = i;
                        map[j] = false;
                    }
                }
            }
        }
        
        return ans;
    }
}
