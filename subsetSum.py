t = int(input())

for _ in range(t):
    n,k = map(int,input().split())
    arr = list(map(int,input().split()))
    iterations = 0
    totalSum = 0
    
    for i in range(1,k+1):
        iterations += (2**(n-i))
    
    for i in range(1,iterations+1):
        index = 0
        val = i
        s = 0
        count = 0
        
        while(val > 0):
            if(val&1 == 1):
                s += arr[index]
                count += 1
            
            index += 1
            val = val >> 1
        
        if(count == k):
            totalSum += s
    
    print(totalSum)
