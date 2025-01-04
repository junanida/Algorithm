def solution(s):
    num_p = s.count('p')
    num_p += s.count('P')
    num_y = s.count('y')
    num_y += s.count('Y')
    if num_p == num_y:
        return True
    else:
        return False