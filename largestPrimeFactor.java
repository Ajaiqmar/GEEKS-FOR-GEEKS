class Solution{
    static long largestPrimeFactor(int N) {
        ArrayList<Long> primes = new ArrayList<Long>();
        
        for(long i=2;i<=Math.floor(Math.sqrt(N));i++)
        {
            while(N%i == 0)
            {
                primes.add(i);
                N = N/((int)i);
            }
        }
        
        if(N > 2)
        {
            primes.add((long)N);
        }
        
        return primes.get(primes.size()-1);
    }
}
