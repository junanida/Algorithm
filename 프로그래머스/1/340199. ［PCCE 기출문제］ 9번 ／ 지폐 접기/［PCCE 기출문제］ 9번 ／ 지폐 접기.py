def solution(wallet, bill):
    # 지폐를 접은 횟수를 저장하는 변수
    answer = 0
    while(min(bill) > min(wallet) or max(bill) > max(wallet)):
        if bill[0] > bill[1]:
            bill[0] = bill[0] // 2
        else:
            bill[1] = bill[1] // 2
        answer += 1
    return answer