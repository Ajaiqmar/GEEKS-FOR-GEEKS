class Solution{
    static long largestPrimeFactor(int N) {
        ArrayList<Long> primes = new ArrayList<Long>();
        
        while(N%2 == 0)
        {
            primes.add((long)2);
            N = N/2;
        }
        
        for(long i=3;i<=Math.floor(Math.sqrt(N));i++)
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
