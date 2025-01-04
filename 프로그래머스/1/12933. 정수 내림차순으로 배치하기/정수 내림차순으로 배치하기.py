def solution(n):
    answer = ''
    arr = []
    while n > 0:
        arr.append(n%10)
        n = n // 10
    arr.sort(reverse=True)
    for item in arr:
        answer += str(item)
    return int(answer)