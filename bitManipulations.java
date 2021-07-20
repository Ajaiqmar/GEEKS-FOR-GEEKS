import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for(int i=0;i<t;i++)
		{
		    int val = sc.nextInt(),ans = 0;
		    
		    while(val > 0)
		    {
		        if((val&1) == 1)
		        {
		            ans++;
		        }
		        
		        val = val >> 1;
		    }
		    
		    System.out.println(ans);
		}
	}
}
