def solution(arr):
    answer = 0
    for item in arr:
        answer += item
    answer = answer / len(arr)
    return answer