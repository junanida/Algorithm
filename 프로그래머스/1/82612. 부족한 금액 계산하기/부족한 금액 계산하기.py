def solution(price, money, count):
    answer = 0
    for i in range(1, count+1):
        money = money - (price * i)
    if money >= 0:
        return 0
    else:
        return -money
    return answer