def solution(t, p):
    answer = 0
    cut_t = len(t)
    cut_p = len(p)
    arr = []
    for i in range(cut_t-cut_p+1):
        arr.append(t[i:i+cut_p])
    for item in arr:
        if int(item) <= int(p):
            answer += 1
    return answer