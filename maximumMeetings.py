class Solution:
    
    #Function to find the maximum number of meetings that can
    #be performed in a meeting room.
    
    def maximumMeetings(self,n,start,end):
        meetings = []
        ans = 1
        prev_meeting = 0
        
        for i in range(n):
            meetings.append([start[i],end[i]])
            
        meetings = sorted(meetings,key = lambda x : x[1])
        
        for i in range(1,n):
            if(meetings[i][0] > meetings[prev_meeting][1]):
                ans += 1
                prev_meeting = i
        
        return ans
