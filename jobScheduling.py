class Solution:
    def JobScheduling(self,Jobs,n):
        Jobs = sorted(Jobs,reverse = True,key = lambda x : x.profit)
        flag = [0 for i in range(101)]
        noOfJobs = 0
        maxProfit = 0
        
        for i in Jobs:
            deadLine = i.deadline
            while(deadLine >= 1):
                if(flag[deadLine] == 0):
                    flag[deadLine] = 1
                    noOfJobs += 1
                    maxProfit += i.profit
                    break
                deadLine -= 1
            
        
        return [noOfJobs,maxProfit]
