n = int(input())
arr = list(map(int, input().split()))
sum = 0

Max = max(arr)
for i in arr:
    sum = sum + ((i/Max)*100)
print(sum/n)