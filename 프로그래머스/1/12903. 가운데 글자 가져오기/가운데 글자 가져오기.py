def solution(s):
    answer = ''
    index = len(s)
    if len(s) % 2 == 0:
        answer += s[index//2 - 1:index//2 + 1]
    else:
        answer += s[index//2:index//2 +1]
    return answer