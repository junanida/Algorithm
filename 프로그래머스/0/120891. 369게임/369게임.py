def solution(order):
    answer = 0
    plus = 10
    while order > 0:
        if order % plus == 3:
            answer += 1
        elif order % plus == 6:
            answer += 1
        elif order % plus == 9:
            answer += 1
        order = order // plus
    
    return answer