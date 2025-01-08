from itertools import combinations
def solution(nums):
    answer = 0
    for num in combinations(nums, 3):
        total = sum(num)
        is_Prime = True
        for divisor in range(2, int(total**(1/2))+1):
            if total % divisor == 0:
                is_Prime = False
                break
        if is_Prime:
            answer += 1
    return answer