class Solution
{ 
 public:
      int kThSmallestFactor(int N , int K) {
          int limit = floor(sqrt(N));
          
          for(int i=1;i<=limit;i++)
          {
              if(N%i == 0)
              {
                  if(K == 1)
                  {
                      return i;
                  }
                  K-=1;
              }
          }
          
          for(int i=limit;i>=1;i--)
          {
              if(N%i == 0 && N/i != i)
              {
                  if(K == 1)
                  {
                      return N/i;
                  }
                  K-=1;
              }
          }
          
          return -1;
      }
};
