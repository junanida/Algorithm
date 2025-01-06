def solution(s):
    answer = sorted(s)
    answer.sort(reverse=True)
    answer = ''.join(answer)
    return answer