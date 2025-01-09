def match(count):
    if (count == 6):
        return 1
    elif(count==5):
        return 2
    elif(count==4):
        return 3
    elif(count==3):
        return 4
    elif(count==2):
        return 5
    else:
        return 6;

def solution(lottos, win_nums):
    answer = []
    low_count = 0
    high_count = 0
    for num in lottos:
        if num in win_nums:
            low_count += 1
        if num == 0:
            high_count += 1
    high_count += low_count
    low_count = match(low_count)
    high_count = match(high_count)
    answer.append(high_count)
    answer.append(low_count)

    return answer