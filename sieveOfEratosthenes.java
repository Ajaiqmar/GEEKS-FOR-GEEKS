class Solution{
    static ArrayList<Integer> sieveOfEratosthenes(int N){
        ArrayList<Integer> ans = new ArrayList<Integer>();
        Boolean flag[] = new Boolean[N+1];
        
        for(int i=2;i<=N;i++)
        {
            if(flag[i] == null)
            {
                ans.add(i);
                for(int j=i;j<=N;j+=i)
                {
                    flag[j] = false;
                }
            }
        }
        
        return ans;
    }
}
