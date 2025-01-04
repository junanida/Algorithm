def solution(x):
    copy_x = x
    arr = []
    sum = 0
    
    while copy_x > 0:
        arr.append(copy_x%10)
        copy_x = copy_x // 10
        
    for item in arr:
        sum += item

    if x % sum == 0:
        return True
    else:
        return False