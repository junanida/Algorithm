def solution(n):
    answer = ''
    odd = '수'
    even = '박'
    for i in range(n):
        if i % 2 == 0:
            answer += odd
        else:
            answer += even
    return answer