class Solution:
    #Function to count the frequency of all elements from 1 to N in the array.
    def frequencyCount(self, arr, N, P):
        # code here
        d = {}
        j = 0
        
        for i in range(N):
            if arr[i] not in d:
                d[arr[i]] = 1
            else:
                d[arr[i]] += 1
        
        for i in range(1,N+1):
            if i in d:
                if(j<N):
                    arr[j] = d[i]
                    j += 1
            else:
                if(j<N):
                    arr[j] = 0
                    j += 1
