def solution(n):
    answer = 0
    num = n**(1/2)
    if num == int(num):
        answer = (num+1)**2
    else:
        return -1
    return answer