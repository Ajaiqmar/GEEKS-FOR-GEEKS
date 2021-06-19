#include <stdio.h>

// USER-DEFINED DICTIONARY

struct dict{
    long long int val;
    long long int count;
};


// K - FREQUENCY METHOD

void kFrequency()
{
  long long int n,k;
  scanf("%Ld %Ld",&n,&k);
  
  struct dict d[n];
  int l=0;
  
  for(int i=0;i<n;i++)
  {
      int flag = 0;
      long long int x;
      
      scanf("%Ld",&x);
      
      for(int j=0;j<l;j++)
      {
          if(d[j].val == x)
          {
              d[j].count += 1;
              flag = 1;
              break;
          }
      }
      
      if(flag == 0)
      {
          d[l].val = x;
          d[l].count = 1;
          l += 1;
      }
  }
  
   // SORTING THE DICTIONARY
 
  for(int i=1;i<l;i++)
  {
      int curr = i;
    
      for(int j=i-1;j>=0;j--)
      {
          if(d[curr].val < d[j].val)
          {
              struct dict temp = d[curr];
              d[curr] = d[j];
              d[j] = temp;
              curr = j;
          }
      }
     
  }
  
  int flag = 0;
      
  for(int i=0;i<l;i++)
  {
     if(d[i].count > k)
     {
          printf("%d ",d[i].val);
          flag = 1;
     }
  }
  
  if(flag == 0)
  {
      printf("-1");
  }
  
  
}

// MAIN METHOD

int main() {

	int T;
	scanf("%d",&T);
	
	while(T!=0)
	{
	    kFrequency();
      printf("\n");
	    T-=1;
	}
	
	return 0;
}
