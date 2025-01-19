def solution(s):
    zero_count = 0
    phase_count = 0
    while s != '1':
        phase_count += 1
        num = s.count('1')
        zero_count += len(s) - num
        s = bin(num)[2:]
    return [phase_count, zero_count]