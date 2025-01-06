def solution(array, commands):
    answer = []
    for i in range(len(commands)):
        temp = []
        temp = array[commands[i][0]-1:commands[i][1]]
        temp.sort()
        answer.append(temp[commands[i][2]-1])
    return answer

# def solution(array, commands):
#     return list(map(lambda x:sorted(array[x[0]-1:x[1]])[x[2]-1], commands))