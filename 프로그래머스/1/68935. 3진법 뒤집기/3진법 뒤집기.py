def solution(n):
    answer = 0
    arr = []
    while n >= 1:
        arr.append(n%3)
        n = n // 3
    arr_length = len(arr)
    for i in range(arr_length):
        answer += (3**i) * (arr[arr_length - 1])
        arr_length -= 1
    return answer