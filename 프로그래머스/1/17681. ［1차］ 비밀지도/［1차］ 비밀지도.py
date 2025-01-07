def trans(arr, n):
    new_arr = []
    for num in arr:
        new_num = ''
        for i in range(n):
            new_num += str(num % 2)
            num = num // 2
        new_num = new_num[::-1]
        new_arr.append(new_num)
    return new_arr

def solution(n, arr1, arr2):
    answer = []
    new_arr1 = trans(arr1, n)
    new_arr2 = trans(arr2, n)
    
    for i in range(n):
        a = new_arr1[i]
        b = new_arr2[i]
        new_decoding = ''
        for j in range(n):
            if a[j] == '1' or b[j] == '1':
                new_decoding += '#'
            else:
                new_decoding += ' '
        answer.append(new_decoding)

    return answer