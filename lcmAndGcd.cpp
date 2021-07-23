class Solution 
{
    static Long gcd(Long A,Long B)
    {
        if(B == 0)
        {
            return A;
        }
        return gcd(B,A%B);
    }
    static Long[] lcmAndGcd(Long A , Long B) 
    {
        Long[] ans = new Long[2];
        ans[1] = gcd(Math.max(A,B),Math.min(A,B));
        ans[0] = (A*B)/ans[1];
        
        return ans;
    }
};
