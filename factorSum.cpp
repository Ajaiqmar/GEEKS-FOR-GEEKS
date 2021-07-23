class Solution
{
	public:
    long long factorSum(int N)
    {
        long long ans = 1;
        
        for(int i=2;i<=floor(sqrt(N));i++)
        {
            long long curr_sum = 1;
            long long curr_pow = 1;
            
            while(N%i == 0)
            {
                curr_pow *= i;
                curr_sum += curr_pow;
                N = N/i;
            }
            
            ans *= curr_sum;
        }
        
        if(N>2)
        {
            ans *= (N+1);
        }
        
        return ans;
    }
};
