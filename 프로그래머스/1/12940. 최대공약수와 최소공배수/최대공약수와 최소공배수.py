import math
# math.gcd(a,b) : 최대 공약수
# a*b / math.gcd(a,b) : 최소 공배수
def solution(n, m):
    answer = []
    answer.append(math.gcd(n,m))
    answer.append(n*m / math.gcd(n,m))
    return answer