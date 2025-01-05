def solution(s, n):
    answer = ''
    for i in s:
        if i.isupper():
            answer += chr((ord(i) + n - 65)%26+65)
        elif i.islower():
            answer += chr((ord(i) + n - 97)%26+97)
        else:
            answer += ' '
    return answer