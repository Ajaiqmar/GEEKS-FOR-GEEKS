class Solution:

	def convert(self,arr, n):
		temp = sorted(arr)
		d = {}
		
		for i in range(n):
		    d[temp[i]] = i
		
		for i in range(n):
		    arr[i] = d[arr[i]]
