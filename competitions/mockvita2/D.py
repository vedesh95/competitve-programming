li=[int(x) for x in input().split()]

def util(tw,wt,val,n):   
    rows, cols = (n+2, tw+2) 
    dp = [[0]*cols]*rows 
    for i in range(1,n+1):
        for j in range(1,tw+1):
            dp[i][j]=dp[i-1][j]
            if(wt[i-1]<=j):
                temp=dp[i-1][j-wt[i-1]]+val[i-1]
                if(dp[i][j]<temp):
                    dp[i][j]=temp
#             print(dp[i][j],end=' ')
#         print("\n")
    return dp[n][tw]

sum=0
for i in li:
    sum=sum+i
# print(sum)
temp=util(sum-sum//2,li,li,len(li))
print(max(temp,sum-temp))

