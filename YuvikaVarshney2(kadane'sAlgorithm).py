def maxSubarraySum(arr, n) :

	# Your code here
    sum=0
    maxi=0
    for i in range(n):
        sum+=arr[i]
        if sum>maxi:
            maxi=sum
        if sum<0:
            sum=0
    return maxi
