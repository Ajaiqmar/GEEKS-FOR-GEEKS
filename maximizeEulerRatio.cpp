class Solution {
  public:
    long long maximizeEulerRatio(long long N) 
    {
        long long ans = 1;
        int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37};
        int index = 0;
        
        while(1)
        {
            if((primes[index]*ans)<=N)
            {
                ans = ans*primes[index];
                index+=1;
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};
