# # 개선된 소수 판별 함수
# def is_prime_number(n):
#     end = int(n**(1/2))
#     for i in range(2, end+1):
#         if n % i == 0:
#             return False
    
#    return True

def solution(n):
    answer = 0
    for num in range(2, n + 1):
        is_prime = True
        for divisor in range(2, int(num**0.5) + 1):
            if num % divisor == 0:
                is_prime = False
                break
        if is_prime:
            answer += 1
    return answer